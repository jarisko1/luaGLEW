/* _____________ LGL GENERATOR ______________
 * Generator zoznamu konstant - consts_list.txt
 * Generetor zoznamu nazvov funckii - funcs_name_list.txt
 * Generetor zoznamu funckii s prototypmi - funcs_prot_list.txt
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>

int count = 0;

// ziska zoznam konstant
int get_consts_list(FILE *from, FILE *consts_list)
{
    char str[200];
// este su niektore duplicitne !!!!!
    while(feof(from)==0)
    {
        // konstatny zacinaju na GL_
        // aj niektore internetove definicie obsahuju GL_, preto su konstanty len tie bez http://
        if(fscanf(from,"%s",str) && strstr(str, "GL_") && !strstr(str,"http://"))
           fprintf(consts_list,"\t{\"%s\", %s},\n",str,str);
    }
    return 0;
}

// ziska zoznam funkcii s prototypmi
int get_func_prot_list(FILE *from, FILE *funcs_prot_list)
{
    int i, j, flag, pocet, flag2;
    // zatial v takomto tvare
    //
    // static int luaglew_glViewport(GLint a, GLfloat b) {
    //      gl_Viewport(GLint a, GLfloat b);
    //      return 0;
    // }
    char str[200];
    char clean[200];
    char word[200];
    char args[40];

    while(feof(from)==0)
    {
        // funkcie zacinaju gl
        // aj niektore definicie obsahuju gl, ale kazda funkcia ma pred nazvom presne jednu medzeru - narvatova_hodnota funkcia(atributy)
        if(fgets(str, 198, from) && strstr(str, " gl"))
        {
            j=0;
            //spracuvam kompletny funkcny prototyp na pozadovany tvar

            //najskorej ocistim od duplicitnych medzier a inych bielych znakov
            for(i=1;i<=strlen(str);i++)
                if(!(str[i]==' ' && str[i]==str[i-1]) || !str[i]=='\n' || !str[i]=='\t')
                        clean[j++]=str[i];
            clean[j]='\0';
            fprintf(funcs_prot_list,"// %s",clean);

            //vyberiem nazov funkcie a vytvorim obalovaciu funkciu napr. static int luaglew_glViewport(lua_State *L)
            flag=0;
            j=0;
            for(i=1;i<strlen(str);i++)
            {
                if(str[i+1]=='l' && str[i]=='g' && str[i-1]==' ')  //nasiel som zaciatok nazvu funkcie
                    flag=1;
                if(flag==1 && str[i]==' ')  //koniec nazvu funkcie je ukonceny medzerou
                    break;
                if(flag==1)
                    word[j++]=str[i];
            }
            word[j]='\0';
            fprintf(funcs_prot_list,"luaglew_%s(lua_State *L) {\n",word);
            fprintf(funcs_prot_list,"\t%s(",word);

            //z str vyseknem len argumenty medzi zatvorkami a ulozim do word
            j=0;
            flag=0;  //flag je 1 ak som uz nasiel funckiu
            flag2=0; //flag2 je 1 ak som uz nasiel ( pri argumentoch
            for(i=1;i<=strlen(str);i++)
            {
                if(str[i-1]==' ' && str[i]=='g' && str[i+1]=='l')  //zaciatok funkcie " gl"
                    flag=1;
                if(flag==1 && str[i-1]=='(')  //zaciatok argumentov "("
                    flag2=1;
                if(flag2==1 && str[i]!=')')
                    word[j++]=str[i];
                if(flag2==1 && str[i]==')')  //koniec argumentov ")"
                    break;
            }
            word[j]='\0';

            //ziskam zoznam argumentov funkcie - ich pocet a typy
            pocet=0;
            j=0;
            flag=0;

            for(i=0;i<=strlen(word);i++)
            {
                if(word[i]==',') //ak , tak predchadzajuce slovo skoniclo, treva ho spracovat a treba preskocit ciarku a aj dalsi znak
                {
                    args[j]='\0';
                    //spracovanie argumentu

                    if(strchr(args,'*')!=NULL)
                        fprintf(funcs_prot_list,"**********CHYBA POINTER (%s) NEBINDOVAT************, ", args, pocet);
                    else  if(strstr(args,"GLint")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d), ", pocet);
                    else  if(strstr(args,"int")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d), ", pocet);
                    else if(strstr(args,"GLuint")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d), ", pocet);
                    else if(strstr(args,"GLdouble")!=NULL)
                        fprintf(funcs_prot_list,"(GLdouble)luaL_checknumber(L, %d), ", pocet);
                    else if(strstr(args,"GLenum")!=NULL)
                        fprintf(funcs_prot_list,"luaglew_enum(L, %d), ", pocet);
                    else if(strstr(args,"GLfloat")!=NULL)
                        fprintf(funcs_prot_list,"(GLfloat)luaL_checknumber(L, %d), ", pocet);
                    else if(strstr(args,"float")!=NULL)
                        fprintf(funcs_prot_list,"(GLfloat)luaL_checknumber(L, %d), ", pocet);
                    else if(strstr(args,"GLclampf")!=NULL)
                        fprintf(funcs_prot_list,"(GLclampf)luaL_checknumber(L, %d), ", pocet);
                    else if(strstr(args,"GLushort")!=NULL)
                        fprintf(funcs_prot_list,"(GLushort)luaL_checkinteger(L, %d), ", pocet);
                    else if(strstr(args,"GLshort")!=NULL)
                        fprintf(funcs_prot_list,"(GLshort)luaL_checkinteger(L, %d), ", pocet);
                    else if(strstr(args,"GLsizei")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checklong(L, %d), ", pocet);
                    else
                        fprintf(funcs_prot_list,"**********CHYBA (%s) NEBINDOVAT************, ", args, pocet);

                    i+=2;
                    flag=0;
                }
                if(i==strlen(word))
                {
                    args[j]='\0';
                    if(strchr(args,'*')!=NULL)
                        fprintf(funcs_prot_list,"**********CHYBA POINTER (%s) NEBINDOVAT************);\n\treturn 0;\n}", args, pocet);
                    else if(strstr(args,"GLint")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"int")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLuint")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checkint(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLdouble")!=NULL)
                        fprintf(funcs_prot_list,"(GLdouble)luaL_checknumber(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLenum")!=NULL)
                        fprintf(funcs_prot_list,"luaglew_enum(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLfloat")!=NULL)
                        fprintf(funcs_prot_list,"(GLfloat)luaL_checknumber(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"float")!=NULL)
                        fprintf(funcs_prot_list,"(GLfloat)luaL_checknumber(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLclampf")!=NULL)
                        fprintf(funcs_prot_list,"(GLclampf)luaL_checknumber(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLushort")!=NULL)
                        fprintf(funcs_prot_list,"(GLushort)luaL_checkinteger(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLshort")!=NULL)
                        fprintf(funcs_prot_list,"(GLshort)luaL_checkinteger(L, %d));\n\treturn 0;\n}", pocet);
                    else if(strstr(args,"GLsizei")!=NULL)
                        fprintf(funcs_prot_list,"luaL_checklong(L, %d)\n", pocet);
                    else
                        fprintf(funcs_prot_list,"**********CHYBA (%s) NEBINDOVAT************);\n\treturn 0;\n}", args, pocet);

                }
                if(flag==0) //zacinam nove slovo
                {
                    pocet++;
                    j=0;
                    //args[j++]=word[i];
                    flag=1;
                }
                if(flag==1) //pokracujem v slove
                    args[j++]=word[i];


            }
                    fprintf(funcs_prot_list,"\n");

        }
    }
    return 0;
}

// ziska zoznam funkcii s prototypmi
int get_func_name_list(FILE *from, FILE *funcs_name_list)
{
    char str[200];

    while(feof(from)==0)
    {
        // funkcie zacinaju gl
        // neobsahuju http://
        if(fscanf(from, " %s", str) && strstr(str, "gl") && !strstr(str, "http://"))
            fprintf(funcs_name_list,"\t{\"%s\", luaglew_%s},\n",str,str);
    }
    return 0;
}

// prehladava path a vsetky subory ktore najde posle get_cf
int get_list(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
{
    DIR *dir = opendir(path);
    FILE *f;
    char path_name[200];

    if(dir)
    {
        struct dirent *ent;
        while((ent = readdir(dir)) != NULL)
        {
            printf("Opening file ");

            if(strcmp(ent->d_name, ".")!=0 && strcmp(ent->d_name, "..")!=0)
            {
                strcpy(path_name,path);
                strcat(path_name,"/");
                strcat(path_name,ent->d_name);
                printf("%s\n", path_name);

                if((f = fopen(path_name,"r"))==NULL)
                {
                    fprintf(stderr,"\tERROR: cannot open file %s\n", path_name);
                    continue;
                }
                count++;

                get_consts_list(f,consts_list);

                fseek(f,0,SEEK_SET);  //znova od zaciatku
                get_func_prot_list(f,funcs_prot_list);

                fseek(f,0,SEEK_SET);
                get_func_name_list(f,funcs_name_list);

                fclose(f);
            }

        }
    }
    else
    {
        fprintf(stderr,"ERROR: directory %s not found\n",path);
        return 1;
    }

    return 0;
}

int main()
{
    FILE *consts_list, *funcs_name_list, *funcs_prot_list;

    consts_list = fopen("../consts_list.txt","w");
    funcs_name_list = fopen("../funcs_name_list.txt","w");
    funcs_prot_list = fopen("../funcs_prot_list.txt","w");

    // uvod pre konstanty
    fprintf(consts_list,"static const LUAGLEW_CONST const_list[] = {\n");

    //uvod pre funkcie
    fprintf(funcs_name_list,"static const struct luaL_Reg luaglew_lib[] = {\n");

    if(get_list("../../core",consts_list, funcs_name_list, funcs_prot_list)==0)
        printf("\n__________________ OK (%d files scanned)________________\n",count);

    //prida sentinel
    fprintf(consts_list,"\t{NULL, NULL}\n};\n");

    //prida sentinel a funkciu na reegistraciu funkcii
    fprintf(funcs_name_list,"\t{NULL, NULL}\n};\n");
    fprintf(funcs_name_list,"\nint luaopen_luaglew (lua_State *L) {\n\tluaL_register(L, \"luaglew\", luaglew_lib);\n\treturn 1;\n}");

    fclose(consts_list);
    fclose(funcs_name_list);
    fclose(funcs_prot_list);

    return 0;
}
