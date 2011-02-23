/* _____________ LGL GENERATOR ______________
 * Generator zoznamu konstant - consts_list.txt
 * Generetor zoznamu nazvov funckii - funcs_name_list.txt
 * Generetor zoznamu funckii s prototypmi - funcs_prot_list.txt
 */


 //////////////////////////// TO DO LIST //////////////////////////
 /*
 ------------POINTER--------------
    - vracanie hodnoty
        - return vracia pocet vratenych hodnot na zasobniku
        - hodnoty sa pushnu na zasobnik
    - pole na vstupe (buffer)
        - vytvorit funckiu get_array, put_array, delete_array, new_array pravdepodobne pre kazdy typ premennej
    - jak to ale rozlisim?
        - opengl vracia normalne cez return???

 treba zadefinovat premenne na zaciatku funkcie - args
 ak pointer neni posledny tak ho nevrati

  - glX je pre X windows system preto treba dat ifdef direktivu do konstant a aj funkcii

  - konstanty su duplicitne, funkcie nie, treba sa ale asi poistit (definicie ale sortnut nepojdu, jednoduchsie asi vsetky subory z core do jedneho a ten sortnut a uniqnut)
  - treba skontrolovat vsetky ci su v takom tvare v akom ich treba a napisat readme aby ludia vedeli jak to ma vyzerat
  - ine typy premennych, uniony a podobne hracky
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>

// pocet1 funckii s prototypm, pocet2 nazvov funkcii a pocet3 konstant
int pocet1=0, pocet2=0, pocet3=0;

// ziska zoznam konstant
// este su niektore duplicitne - asi necham cely ten zoznam prebehnut unicom bez sortu, duplictne by mali byt za sebu, otestujem unicom zo sortom
// treba to aj sortnut, lebo konstanty su v suboroch duplicitne. cize hlavicku az nakonec treba vpisat
// inak hotovo
int get_consts_list(FILE *from, FILE *consts_list)
{

    char str[200];

    while(feof(from)==0)
    {
        // konstatny zacinaju na GL_
        // aj niektore internetove definicie obsahuju GL_, preto su konstanty len tie bez http://
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "GLX_") || strstr(str, "WGL_")) && !strstr(str,"http://"))
        {
           pocet3++;
           fprintf(consts_list,"\t{\"%s\", %s},\n",str,str);
        }
    }
    return 0;
}

// dostane const GLubyte *procName a vrati procName
// malo by byt ok
char *return_value_function(char *pointer)
{
    char *value=strchr(pointer,'*');
    while(strchr(value,'*'))
        value=strchr(value,'*')+1;
    //printf("%s\n",value);
    return value;
}

// dostane GLint arg a vyhodi luaL_checkint(L, number)
// ak je dest 1, funckia spravi string, ktory ziska premennu zo zasobnika a checkne jej typ
// ak je dest 2, funckia pushne premennu na zasobnik
// number je poradie na zasobniku. pri dest 2 nema zmysel
char *luaglew_typetobind_function(char *string, int dest, int number)
{
    FILE *pom;
    pom=fopen("../pom.txt","a");
    char binded[500];
    char type[40];
    int field_flag=0;  // ak 1, tak sa tam nachadza pole a treba volat prislusne funckie
    int i=0;
    int j=0;

    if(strchr(string,'*')!=NULL)  //flag ak je tam pointer
        field_flag=1;
    if(strstr(string,"const")!=NULL)  // nechcem const na zaciatku
        j=6;
    if(strstr(string,"unsigned")!=NULL)  // unsigned neco je specialne, lebo ma dve slova
    {
        strcpy(type, "unsigned ");
        i=9;
        j=9;
    }
    for(;i<strlen(string);i++, j++)  // ziskam len typ premennej, bez nazvu, bez * ... a ulozim do premennej type
    {
        if(string[j]!=' ' && string[j]!='*')
            type[i]=string[j];
        else
            break;
    }
    type[i]='\0';

/////////////////////////////////////////////////////////////////////////////////////////////////////
// type je len typ, string je cely retazec s nazvom premennej, const a pointermi
    binded[0]='\0';

    if(dest==1) // check zo zasobnika
    {
// 2D FIELDS //
        if(strstr(string,"**")!=NULL)
        {
            if(strstr(string,"GLchar")!=NULL)
                sprintf(binded,"(GLchar **)luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"char")!=NULL)
                sprintf(binded,"luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"GLvoid")!=NULL || strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_checkarray_2void(L, %d)", number);
            else
                sprintf(binded,"**check nespracovane 2-rozmerne pole typu %s **", type);
        }
// 1D FIELDS //
        else if(strchr(string,'*')!=NULL)
        {
            if(strstr(string,"GLchar")!=NULL)
                sprintf(binded,"(GLchar *)luaglew_checkarray_char(L, %d)", number);
            else if(strstr(string,"char")!=NULL)
                sprintf(binded,"luaglew_checkarray_char(L, %d)", number);
            else if(strstr(string,"GLboolean")!=NULL)
                sprintf(binded,"(GLboolean *)luaglew_checkarray_boolean(L, %d)", number);
            else if(strstr(string,"GLbyte")!=NULL)
                sprintf(binded,"(GLbyte *)luaglew_checkarray_byte(L, %d)", number);  // mozno ako int
            else if(strstr(string,"GLubyte")!=NULL)
                sprintf(binded,"(GLubyte *)luaglew_checkarray_ubyte(L, %d)", number);  // mozno ako int
            else if(strstr(string,"GLdouble")!=NULL)
                sprintf(binded,"(GLdouble *)luaglew_checkarray_doublefloat(L, %d)", number);
            else if(strstr(string,"GLfloat")!=NULL)
                sprintf(binded,"(GLfloat *)luaglew_checkarray_doublefloat(L, %d)", number);
            else if(strstr(string,"float")!=NULL)
                sprintf(binded,"(float *)luaglew_checkarray_doublefloat(L, %d)", number);
            else if(strstr(string,"GLenum")!=NULL)
                sprintf(binded,"luaglew_checkarray_enum(L, %d)", number);
            else if(strstr(string,"GLint64")!=NULL)
                sprintf(binded,"(GLint64 *)luaglew_checkarray_int(L, %d)", number);  // ako int?
            else if(strstr(string,"GLint64EXT")!=NULL)
                sprintf(binded,"(GLint64EXT *)luaglew_checkarray_int(L, %d)", number); // ako int?
            else if(strstr(string,"GLint")!=NULL)
                sprintf(binded,"(GLint *)luaglew_checkarray_int(L, %d)", number);
            else if(strstr(string,"GLuint64EXT")!=NULL)
                sprintf(binded,"(GLuint64EXT *)luaglew_checkarray_int(L, %d)", number);
            else if(strstr(string,"GLuint")!=NULL)
                sprintf(binded,"(GLuint *)luaglew_checkarray_int(L, %d)", number);
            else if(strstr(string,"unsigned int")!=NULL)
                sprintf(binded,"(unsigned int *)luaglew_checkarray_int(L, %d)", number);
            else if(strstr(string,"int")!=NULL)
                sprintf(binded,"luaglew_checkarray_int(L, %d)", number);
            else if(strstr(string,"GLsizei")!=NULL)
                sprintf(binded,"(GLsizei *)luaglew_checkarray_int(L, %d)", number);  // ako int
            else if(strstr(string,"unsigned long")!=NULL)
                sprintf(binded,"(unsigned long *)luaglew_checkarray_int(L, %d)", number);  // ako int
            else if(strstr(string,"GLshort")!=NULL)
                sprintf(binded,"(GLshort *)luaglew_checkarray_int(L, %d)", number);  // ako int
            else if(strstr(string,"GLushort")!=NULL)
                sprintf(binded,"(GLushort *)luaglew_checkarray_int(L, %d)", number);  // ako int
            else if(strstr(string,"GLvoid")!=NULL)
                sprintf(binded,"(GLvoid *)luaglew_checkarray_void(L, %d)", number);  // pole voidov ??
            else if(strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_checkarray_void(L, %d)", number);  // pole voidov ??
            else if(strstr(string,"Display")!=NULL)
                sprintf(binded,"luaglew_checkarray_display(L, %d)", number);
            else if(strstr(string,"GLXHyperpipeConfigSGIX")!=NULL)
                sprintf(binded,"luaglew_checkarray_GLXHyperpipeConfigSGIX(L, %d)", number);
            else if(strstr(string,"GLvdpauSurfaceNV")!=NULL)
                sprintf(binded,"luaglew_checkarray_GLvdpauSurfaceNV(L, %d)", number);
            else if(strstr(string,"GetProcAddress")!=NULL)
                sprintf(binded,"luaglew_checkarray_GetProcAddress(L, %d)", number);
            else if(strstr(string,"GetProcAddressARB")!=NULL)
                sprintf(binded,"luaglew_checkarray_GetProcAddressARB(L, %d)", number);
            else if(strstr(string,"HGPUNV")!=NULL)
                sprintf(binded,"luaglew_checkarray_HGPUNV(L, %d)", number);

            else sprintf(binded,"**check 1-rozmerne pole typu %s **", type);
        }
// ALL OTHER TYPES //
        else if(strstr(string,"GLint")!=NULL)
            sprintf(binded,"(GLint)luaL_checkint(L, %d)", number);
        else if(strstr(string,"unsigned int")!=NULL)
            sprintf(binded,"(unsigned int)luaL_checkint(L, %d)", number);
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
        else  if(strstr(string,"int")!=NULL)
            sprintf(binded,"luaL_checkint(L, %d)", number);
        else  if(strstr(string,"GLbitfield")!=NULL)  // definovane ako unsigned int, je to bitova maska
            sprintf(binded,"(GLbitfield)luaL_checkint(L, %d)", number);
        else if(strstr(string,"GLenum")!=NULL)
            sprintf(binded,"luaglew_checkenum(L, %d)", number);
        else if(strstr(string,"GLfloat")!=NULL || strstr(string,"float")!=NULL)
            sprintf(binded,"(GLfloat)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLclampf")!=NULL)
            sprintf(binded,"(GLclampf)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLclampd")!=NULL)  // pravdepodobne clamp double
            sprintf(binded,"(GLclampd)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLdouble")!=NULL)
            sprintf(binded,"(GLdouble)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLushort")!=NULL)
            sprintf(binded,"(GLushort)luaL_checkinteger(L, %d)", number);
        else if(strstr(string,"GLshort")!=NULL)
            sprintf(binded,"(GLshort)luaL_checkinteger(L, %d)", number);
        else if(strstr(string,"GLsizei")!=NULL)
            sprintf(binded,"(GLsizei)luaL_checklong(L, %d)", number);
        else if(strstr(string,"unsigned long")!=NULL)
            sprintf(binded,"(unsigned long)luaL_checklong(L, %d)", number);
        else if(strstr(string,"GLvoid")!=NULL)  // void znamena ziadny argument
            sprintf(binded,"", number);
        else if(strstr(string,"void")!=NULL)
            sprintf(binded,"", number);
        else if(strstr(string,"GLboolean")!=NULL)  // check funckie neexistuju, vyuzijem lua_toboolean
            sprintf(binded,"(GLboolean)lua_toboolean(L, %d)", number);
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_toboolean(L, %d)", number);
        else if(strstr(string,"GLubyte")!=NULL)  // byte a ubyte zatial checknumber ale treba overit! alebo checkint?
            sprintf(binded,"(GLubyte)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLbyte")!=NULL)
            sprintf(binded,"(GLbyte)luaL_checknumber(L, %d)", number);

        else
        {
            //fprintf(pom,"%s\n",type);
            sprintf(binded,"**check nespracovany typ %s **", type);
        }
    }

/*
LUA C API push functions

void lua_pushnil (lua_State *L);
void lua_pushboolean (lua_State *L, int bool);
void lua_pushnumber (lua_State *L, lua_Number n);
void lua_pushinteger (lua_State *L, lua_Integer n);
void lua_pushlstring (lua_State *L, const char *s, size_t len);
void lua_pushstring (lua_State *L, const char *s);
*/

    if(dest==2) // push do zasobnika
    {
        if(strstr(string,"**")!=NULL) // obsahuje pointer, treba volat funkcie na ziskanie poli zo stacku
        {
            sprintf(binded,"**push (2-rozmerne pole typu %s)  **", type);
        }
        else if(strchr(string,'*')!=NULL)
        {
            if(strstr(string,"Display")!=NULL)
                sprintf(binded,"luaglew_pusharray_display(L, return_value)");
            else if(strstr(string,"GLXFBConfig")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXFBConfig(L, return_value)");
            else if(strstr(string,"GLXHyperpipeConfigSGIX")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXHyperpipeConfigSGIX(L, return_value)");
            else if(strstr(string,"GLXHyperpipeNetworkSGIX")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXHyperpipeNetworkSGIX(L, return_value)");
            else if(strstr(string,"GLubyte")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLubyte(L, return_value)");
            else if(strstr(string,"GLvoid")!=NULL)
                sprintf(binded,"(GLvoid *)luaglew_pusharray_void(L, return_value)");
            else if(strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_pusharray_void(L, return_value)");
            else if(strstr(string,"XVisualInfo")!=NULL)
                sprintf(binded,"luaglew_pusharray_XVisualInfo(L, return_value)");

            else sprintf(binded,"** push(1-rozmerne pole typu %s) **", type);
        }
        else if(strstr(string,"GLint")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"unsigned int")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else  if(strstr(string,"int")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else  if(strstr(string,"GLbitfield")!=NULL)  // definovane ako unsigned int, je to bitova maska
            sprintf(binded,"lua_pushinteger(L, return_value)");

        else if(strstr(string,"GLdouble")!=NULL)
            sprintf(binded,"lua_pushnumber(L, return_value)");

        //else if(strstr(string,"GLenum")!=NULL)
            //sprintf(binded,"luaglew_pushenum(L, %d)");

        else if(strstr(string,"GLfloat")!=NULL)
            sprintf(binded,"lua_pushnumber(L, return_value)");
        else if(strstr(string,"float")!=NULL)
            sprintf(binded,"lua_pushnumber(L, return_value)");
        else if(strstr(string,"GLclampf")!=NULL)
            sprintf(binded,"lua_pushnumber(L, return_value)");
        else if(strstr(string,"GLclampd")!=NULL)  // pravdepodobne clamp double
            sprintf(binded,"lua_pushnumber(L, return_value)");

        else if(strstr(string,"GLushort")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"GLshort")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");

        //else if(strstr(string,"GLsizei")!=NULL)
          //  sprintf(binded,"luaL_checklong(L, %d)");
        //else if(strstr(string,"unsigned long")!=NULL)
          //  sprintf(binded,"luaL_checklong(L, %d)");

        else if(strstr(string,"GLboolean")!=NULL)  // check funckie neexistuju, vyuzijem lua_toboolean
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"BOOL")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");

        else if(strstr(string,"GLubyte")!=NULL)  // byte a ubyte zatial pushnumber ale treba overit! alebo checkint?
            sprintf(binded,"lua_pushnumber(L, return_value)");
        else if(strstr(string,"GLbyte")!=NULL)
            sprintf(binded,"lua_pushnumber(L, return_value)");

        else
        {
            //fprintf(pom,"%s\n",type);
            sprintf(binded,"push( ** nespracovany typ %s ** )", type);
        }
    }
    fclose(pom);
    //printf("%s -> %s\n",string,binded);
    return binded;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////// ziska zoznam funkcii s prototypmi a vytvori obalovacie funkcie ///////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
int get_func_prot_list(FILE *from, FILE *funcs_prot_list)
{
    int i, j, flag, pocet, flag2;
    int position=0; // pozicia v spracovavanom stringu

    char str[400];  // riadok zo vstupneho suboru, ktory je nasledne spracovany
    char clean[400];  // precisteny str zo vstupu, bez duplicitnych medzier a inych zbytocnych bielych znakov
    char args[100];  // jeden konkretny argument (typ aj nazov), ktory sa posiela na spracovanie prislusnej funckie

    int return_num=0; //flag, ktory urcuje, ci funkcia vracia hodnotu. Ak je 1, tak return_string obsahuje navratovy typ
    char return_string[40];

    char function_name[100];  //meno funkcie
    char function_body[2000];  // telo funkcie
    char function_body_help[2000];  // pomocne telo funckie

    char arguments[400];  // zoznam vsetkych argumentov

    while(feof(from)==0)
    {
// funkcie zacinaju gl alebo wgl
// aj niektore definicie obsahuju gl, ale kazda funkcia ma pred nazvom presne jednu medzeru - narvatova_hodnota funkcia(atributy), neobsahuje typedef
        if(fgets(str, 398, from) && (strstr(str, " gl") || strstr(str, " wgl")) && !strstr(str, "http://") && !strstr(str,"typedef"))
        {
            pocet1++;
            return_num=0;
            return_string[0]='\0';
            function_name[0]='\0';
            function_body[0]='\0';
            arguments[0]='\0';
            position=0;
            j=0;

//-----------------------spracuvam kompletny funkcny prototyp na pozadovany tvar---------------------------//

// ocistim  string str od duplicitnych medzier a inych bielych znakov a ulozim do stringu clean
            for(i=1;i<=strlen(str);i++)
                if(!(str[i]==' ' && str[i]==str[i-1]) || !str[i]=='\n' || !str[i]=='\t')
                        clean[j++]=str[i];
            clean[j]='\0';
            fprintf(funcs_prot_list,"// %s",clean);

// osetrim navratovu hodnotu
// ak je navratova hodnota void tak return_value=0
// ak nieco ine tak return_value=1 a return_string=naratovy_typ
// pozor na const v navratovej hodnote
            if(clean[0]=='c' && clean[1]=='o' && clean[2]=='n' && clean[3]=='s' && clean[4]=='t')
                position=6;
            else
                position=0;
            for(i=0;position<40;position++, i++)
            {
                if(clean[position]!=' ' || clean [position+1]=='*')
                    return_string[i]=clean[position];
                else
                    break;
            }
            return_string[position]='\0';

            if(strstr(return_string,"void")!=NULL && strchr(return_string,'*')==NULL)
                return_num=0;
            else
                return_num=1;

            //printf("%s a return %d\n",return_string,return_num);

//vyberiem nazov funkcie a vytvorim obalovaciu funkciu napr. static int luaglew_glViewport(lua_State *L)
            for(position++, i=0;position<400;position++, i++)
            {
                if(clean[position]!=' ' && clean[position]!='(')
                   function_name[i]=clean[position];
                else
                    break;
            }
            function_name[i]='\0';

            //printf("function name %s\n",function_name);

            fprintf(funcs_prot_list,"static int luaglew_%s(lua_State *L) {\n",function_name);

//vysekam len argumenty medzi zatvorkami a ulozim do stringu arguments
            for(position+=2, i=0; position<400; position++, i++)
            {
                if(clean[position]!=')')
                    arguments[i]=clean[position];
                else
                    break;
            }
            arguments[i]='\0';

            //printf("argumenty %s\n",arguments);

//---------------------------vytvorenie tela funkcie--------------------------------------//
//ziskam zoznam argumentov funkcie a spracujem ich do tela funckie v stringu function_body
            pocet=0;
            j=0;
            flag=0;

// ak je navratova hodnota treba zadefinovat premennu return_value s prislusnym typom
 // vlozim meno funckie
            if(return_num==1)
            {
                sprintf(function_body,"\t%s return_value;\n",return_string);
                sprintf(function_body_help,"\treturn_value = %s(",function_name);
                strcat(function_body,function_body_help);
            }
            else if(return_num==0)
            {
                sprintf(function_body_help,"\t%s(",function_name);
                strcat(function_body,function_body_help);
            }

// spracovanie argumentov a ich pridanie do tela funkcie
            for(i=0;i<=strlen(arguments);i++)
            {
                if(arguments[i]==',') //ak , tak predchadzajuce slovo skoniclo, treba ho spracovat a treba preskocit ciarku a aj dalsi znak
                {
                    args[j]='\0';
                    sprintf(function_body_help,"%s, ",luaglew_typetobind_function(args,1,pocet));
                    strcat(function_body, function_body_help);
                    i+=2;
                    flag=0;
                }
                if(i==strlen(arguments))
                {
                    // string argumentov skoncil, treba vlozit posledny argument(ak je) a uzavriet funckiu
                    args[j]='\0';
                    if(strlen(args)>0)
                        {
                            sprintf(function_body_help,"%s);\n",luaglew_typetobind_function(args,1,pocet));
                            strcat(function_body, function_body_help);
                        }
                }
                if(flag==0) //zacinam nove slovo
                {
                    pocet++;
                    j=0;
                    //args[j++]=word[i];
                    flag=1;
                }
                if(flag==1) //pokracujem v slove
                    args[j++]=arguments[i];
            }
            if(return_num==0)
                sprintf(function_body_help,"\treturn 0;\n}\n");
            else
            {
                sprintf(function_body_help,"\t%s;\n\treturn 1;\n}\n",luaglew_typetobind_function(return_string,2,99));
            }

            strcat(function_body,function_body_help);
            fprintf(funcs_prot_list,"%s\n",function_body);
        }
    }

    return 0;
}

// ziska zoznam funkcii bez prototypov
// malo by byt dobre
// treba ale skontrolovat ci su tam vsetky funkcie
int get_func_name_list(FILE *from, FILE *funcs_name_list)
{
    char str[200];

    while(feof(from)==0)
    {
        // funkcie zacinaju gl
        // neobsahuju http://
        if(fscanf(from, " %s", str) && strstr(str, "gl") && !strstr(str, "http://") &&!strstr(str,"GL"))
        {
            pocet2++;
            fprintf(funcs_name_list,"\t{\"%s\", luaglew_%s},\n",str,str);
        }
    }
    return 0;
}

// prehladava path a vsetky subory ktore najde posle konkretnym funkciam na spracovanie
// funguje, prehlada vsetky subory a vypise pocet spracovanych suborov
int get_list(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
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
    printf("\n__________________ OK (%d files scanned) ________________\n",count);
    return 0;
}


// main otvori vsetky potrebne subory
// vypise hlavicky potrebne v suboroch
// spusti prehladavanie a pracovanie priecinku s definiciami
int main()
{
    FILE *consts_list, *funcs_name_list, *funcs_prot_list;

    consts_list = fopen("../consts_list.txt","w");
    funcs_name_list = fopen("../funcs_name_list.txt","w");
    funcs_prot_list = fopen("../funcs_prot_list.txt","w");

    // uvodna hlavicka pre konstanty
    fprintf(consts_list,"static const LUAGLEW_CONST const_list[] = {\n");

    //uvodna hlavicka pre nazvy funkcii
    fprintf(funcs_name_list,"static const struct luaL_Reg luaglew_lib[] = {\n");

    get_list("../../core",consts_list, funcs_name_list, funcs_prot_list);

    //prida sentinel konstantam
    fprintf(consts_list,"\t{NULL, NULL}\n};\n");

    //prida sentinel a funkciu na reegistraciu funkcii
    fprintf(funcs_name_list,"\t{NULL, NULL}\n};\n");
    fprintf(funcs_name_list,"\nint luaopen_luaglew (lua_State *L) {\n\tluaL_register(L, \"luaglew\", luaglew_lib);\n\treturn 1;\n}");

    fclose(consts_list);
    fclose(funcs_name_list);
    fclose(funcs_prot_list);

    printf("\n\tfunkcii s prototypom   %d\n\tfunkcii bez prototypu  %d\n\tkonstant\t       %d\n",pocet1,pocet2,pocet3);
    printf("__________________________________________________________");

    return 0;
}
