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
            if(fgets(str, 398, from)  && (strstr(str,"typedef")))
            {
                //erasing new line symbol at the end of str and putting ; there
                str[strlen(str)-1]=';';
                str[strlen(str)]='\0';

                fprintf(ffi_lib_list,"%s\n",str);

                newtypesnum++;
            }
        }

    }

    //getting functions
    if(kind==2)
    {

        while(feof(from)==0)
        {
            //funcions begin with gl and dont contain http or typedef
            if(fgets(str, 398, from) && (strstr(str, " gl") || strstr(str, " wgl")) && !strstr(str, "http://") && !strstr(str,"typedef"))
            {
                //erasing new line symbol at the end of str and putting ; there
                if(str[strlen(str)-2]!=';')  // in case of ; already at the end of function
                {
                    str[strlen(str)-1]=';';
                    str[strlen(str)]='\0';
                }
                else
                    str[strlen(str)-1]='\0';
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
    fprintf(ffi_lib_list,"]]\n");

    fclose(ffi_lib_list);
    return 0;
}


