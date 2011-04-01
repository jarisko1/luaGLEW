/*
/* luaGLEW code generator for FFI library
/*
/* author: Jaroslav Svarc
/*
/* generates code in file ./ffi_lib_list.lua
/*
/****************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dirent.h>

int constsnum=0;  // count of constants
int funcsnum=0;  // count of functions
int newtypesnum=0;  // count of new types

// function gets code for ffi library
int get_ffi_lib_list(FILE *from, FILE *ffi_lib_list, int kind)
{
    char str[1000];

    //getting enums
    if(kind==1)
    {
        while(feof(from)==0)
        {
            // constants begin with GL_, WGL_ or GLX_, but they dont contain neither http:// nor [
            if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "GLX_") || strstr(str, "WGL_")) && !strstr(str,"http://" )&& !strstr(str,"["))
            {
                fprintf(ffi_lib_list,"//####%s\n",str);
                fprintf(ffi_lib_list,"\t%s = ",str);
                fscanf(from,"%s",str);
                if(strstr(str,"0x"))
                    fprintf(ffi_lib_list,"%s,\n",str);
                else
                    fprintf(ffi_lib_list,"0x1,\n",str);
                constsnum++;
            }
        }
    }

    //getting new types
    if(kind==3)
    {
        while(feof(from)==0)
        {
            // new types starts with typedef statement
            if(fgets(str, 398, from)  &&
               (strstr(str,"typedef")) &&
               !(strstr(str,"GLX")) &&
               !(strstr(str,"GLintptr")) &&
               !(strstr(str,"ptrdiff_t")) &&
               !(strstr(str,"_GPU_DEVICE"))
               )
            {
                //erasing new line symbol at the end of str and putting ; there
                 if(str[strlen(str)-2]!=';')
                {
                    str[strlen(str)-1]=';';
                    str[strlen(str)]='\0';
                }
                else
                    str[strlen(str)-1]='\0';

                fprintf(ffi_lib_list,"%s\n",str);

                newtypesnum++;
            }
        }

    }

    //getting functions
    if(kind==2)
    {
        char funcName[400];
        int i;
        int have;
        int position;

        while(feof(from)==0)
        {
            //funcions begin with gl and dont contain http or typedef
            if(     fgets(str, 398, from) &&
                    (strstr(str, "gl") || strstr(str, "wgl")) &&  // functions start with gl or wgl
                   !strstr(str, "http://") &&  // dont contain http
                   !strstr(str,"typedef") &&  // dont contain http
                   !strstr(str,"glX")  &&  // X Windows functions ignored
                   !strstr(str,"Display")&&  // Windows functions ignored
                   !strstr(str,"GL_") &&  // not constant
                   !strstr(str,"WGL_")&&  // not constant
                   !strstr(str,"HDC") && // HDC ignoredGLint64EXT
                   !strstr(str,"GLintptr") &&
                   !strstr(str,"GLint64EXT") &&
                   !strstr(str,"GLuint64EXT") &&
                   !strstr(str,"GLvdpauSurfaceNV") &&
                   !strstr(str,"GLint64") &&
                   !strstr(str,"BOOL")
                )
            {
                //getting name of function for duplication deleting
                for(i=0, have=0, position=0 ; i<400; i++)
                {
                    if(have == 1 && str[i]!='(' && str[i]!=' ')
                    {
                       funcName[position]=str[i];
                       position++;
                    }
                    else if(have == 0 && ( (str[i]==' ' && str[i+1]=='g' && str[i+2]=='l') || (str[i]==' ' && str[i+1]=='w' && str[i+2]=='g' && str[i+3]=='l') ) ) // " gl" or " wgl" start
                        have = 1;
                    else
                        have = 0;
                }
                funcName[position]='\0';

                //erasing new line symbol at the end of str and putting ; there
                if(str[strlen(str)-2]!=';')  // in case of ; already at the end of function
                {
                    str[strlen(str)-1]=';';
                    str[strlen(str)]='\0';
                }
                else
                    str[strlen(str)-1]='\0';

                fprintf(ffi_lib_list,"//####%s\n",funcName);
                fprintf(ffi_lib_list,"%s\n",str);

                funcsnum++;
            }
        }
    }
}

// function gets lists of "kind" from core files
// kind = 1 for constants binding
// kind = 2 for functions binding
// kind = 3 for new types (typedefs, structures, etc.)
int get_list(char *path, FILE *ffi_lib_list, int kind)
{
    DIR *dir = opendir(path);
    FILE *f;
    char path_name[200];
    int count = 0;

    if(dir)
    {
        struct dirent *ent;
        while((ent = readdir(dir)) != NULL)
        {
            if(kind==1)  //print only once
                printf("Opening file ");

            if(strcmp(ent->d_name, ".")!=0 && strcmp(ent->d_name, "..")!=0)
            {
                strcpy(path_name,path);
                strcat(path_name,"/");
                strcat(path_name,ent->d_name);

                if(kind==1)  //print only once
                    printf("%s\n", path_name);

                if((f = fopen(path_name,"r"))==NULL)
                {
                    fprintf(stderr,"\tERROR: cannot open file %s\n", path_name);
                    continue;
                }
                count++;

                get_ffi_lib_list(f, ffi_lib_list, kind);

                fclose(f);
            }
        }
    }
    else
    {
        fprintf(stderr,"ERROR: directory %s not found\n",path);
        return 1;
    }

    if(kind==1)
        printf("\n_________________ OK (%d files scanned - %d constants found) _______________\n",count, constsnum);
    else if(kind==2)
        printf("\n_________________ OK (%d files scanned - %d functions found) _______________\n",count, funcsnum);
    else if(kind==3)
        printf("\n_________________ OK (%d files scanned - %d new types found) _______________\n",count, newtypesnum);

    return 0;
}

int main()
{
    FILE *ffi_lib_list;
    FILE *ffi_lib_list_clean;

    ffi_lib_list = fopen("../ffi_lib_list.lua","w");

 //header for FFI library
    fprintf(ffi_lib_list,"local ffi = require( \"ffi\" )\n\nffi.cdef[[\n\n");

    fprintf(ffi_lib_list,"enum {\n");
    get_list("../../core",ffi_lib_list,1);
    fprintf(ffi_lib_list,"};\n\n\n");

    get_list("../../core",ffi_lib_list,3);
    fprintf(ffi_lib_list,"\n\n\n");

    get_list("../../core",ffi_lib_list,2);
    fprintf(ffi_lib_list,"\n\n\n");

//trailer for FFI library
    fprintf(ffi_lib_list,"]]\n\n");

    fprintf(ffi_lib_list,"--glew32 isnt loaded!\nreturn ffi.load(\"opengl32.dll\")\n\n");

    fclose(ffi_lib_list);

// CHECKING FOR DUPLICATES
    ffi_lib_list = fopen("../ffi_lib_list.lua","r");
    ffi_lib_list_clean = fopen("../ffi_lib_list_clean.lua","w");

    int duplCount=0;
    long int offset = 0;  // offset in file
    char funcName[100];  // name of function
    char line[100];
    funcName[0]='\0';  //
    int flag = 0;  // flag is 1, when funcName contains name of function
    int dupl = 0;  // 1 if duplicate found

    while(1)  // outer loop
    {
        fgets(funcName,98,ffi_lib_list);
        if(strstr(funcName,"//####"))
        {
            flag=1;
            offset = ftell(ffi_lib_list);
        }
        else
            fputs(funcName,ffi_lib_list_clean);

        if(flag==1)  // inner loop
        {
            dupl = 0;
            fseek(ffi_lib_list, offset, SEEK_SET);  // stars from offset and will finding string line
            while(feof(ffi_lib_list)==0)
            {
                fgets(line,98,ffi_lib_list);
                if(strcmp(line,funcName)==0)
                    dupl=1;
            }
            if(dupl==0)  //duplicate not found, function can be written to the clean file
            {
                fseek(ffi_lib_list,offset,SEEK_SET);
                //fputs(funcName,ffi_lib_list_clean);
                fgets(funcName,98,ffi_lib_list);
                fputs(funcName,ffi_lib_list);
            }
            else  // duplicate lines must be throwed away
            {
                duplCount++;
                fseek(ffi_lib_list,offset,SEEK_SET);
                line[0]='\0';
                while(strstr(line,"//####")==0)
                {
                    offset = ftell(ffi_lib_list);
                    fgets(line,98,ffi_lib_list);
                }
            }
        }
        if(flag == 1)
        {
            fseek(ffi_lib_list,offset,SEEK_SET);
            flag = 0;
        }
        if(flag == 0 && feof(ffi_lib_list))
            break;
    }
    printf("\n_________________ OK (%d duplicates found) _______________\n",duplCount);

    return 0;
}


