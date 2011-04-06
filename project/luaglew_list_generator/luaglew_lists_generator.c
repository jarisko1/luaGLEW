/* _____________ luaGLEW GENERATOR ______________
 * Generator zoznamu konstant - consts_list.c
 * Generetor zoznamu nazvov funckii - funcs_list.c
 * Generetor zoznamu funckii s prototypmi - funcs_binding_code.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

// funcsCounter funckii s prototypm, pocet2 nazvov funkcii a constsCounter konstant
int funcsCounter=0, constsCounter=0;

// function gets list of constants
int luaglew_get_consts(FILE *from, FILE *consts_list)
{
    char str[200];

    while(feof(from)==0)
    {
        //constants start with GL_ or WGL_, we ignore GLX_ constants and http:// links
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "WGL_")) && !strstr(str,"http://") && !strstr(str, "GLX_"))
        {
           constsCounter++;
           fprintf(consts_list,"#ifdef %s\n\t{\"%s\", %s},\n#endif\n",str,str,str);
        }
    }
    return 0;
}

// dostane GLint arg a vyhodi luaL_checkint(L, number)
// ak je dest 1, funckia spravi string, ktory ziska premennu zo zasobnika a checkne jej typ
// ak je dest 2, funckia pushne premennu na zasobnik
// number je poradie na zasobniku. pri dest 2 nema zmysel
char *luaglew_typetobind(char *string, int dest, int number)
{
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

// GET 2D FIELDS //
        if(strstr(string,"**")!=NULL)
        {
            if(strstr(string,"GLchar")!=NULL)
                sprintf(binded,"(GLchar **)luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"char")!=NULL)
                sprintf(binded,"luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"GLvoid")!=NULL || strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_checkarray_2void(L, %d)", number);
            else
                return NULL;
        }

// GET 1D FIELDS //
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
                sprintf(binded,"(GLdouble *)luaglew_checkarray_double(L, %d)", number);
            else if(strstr(string,"GLfloat")!=NULL)
                sprintf(binded,"(GLfloat *)luaglew_checkarray_float(L, %d)", number);
            else if(strstr(string,"float")!=NULL)
                sprintf(binded,"(float *)luaglew_checkarray_float(L, %d)", number);
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
            else
                return NULL;
        }

// GET ALL OTHER TYPES //
        else if(strstr(string,"GLintptr")!=NULL)
            sprintf(binded,"(GLintptr)luaglew_checkarray_int(L, %d)", number);
        else if(strstr(string,"GLint")!=NULL)
            sprintf(binded,"(GLint)luaL_checkint(L, %d)", number);
        else if(strstr(string,"unsigned int")!=NULL)
            sprintf(binded,"(unsigned int)luaL_checkint(L, %d)", number);
        else if(strstr(string,"GLhandleARB")!=NULL)
            sprintf(binded,"(GLhandleARB)luaL_checkint(L, %d)", number);
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
        else if(strstr(string,"UINT")!=NULL)
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
        else if(strstr(string,"GLvoid")!=NULL)  // void means no argument
            sprintf(binded,"");
        else if(strstr(string,"void")!=NULL)
            sprintf(binded,"");
        else if(strstr(string,"GLboolean")!=NULL)  // check funckie neexistuju, vyuzijem lua_toboolean
            sprintf(binded,"(GLboolean)lua_toboolean(L, %d)", number);
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_toboolean(L, %d)", number);
        else if(strstr(string,"GLubyte")!=NULL)  // byte a ubyte zatial checknumber ale treba overit! alebo checkint?
            sprintf(binded,"(GLubyte)luaL_checknumber(L, %d)", number);
        else if(strstr(string,"GLbyte")!=NULL)
            sprintf(binded,"(GLbyte)luaL_checknumber(L, %d)", number);
        else
            return NULL;
    }

/*
LUA C API push functions

void lua_pushnil (lua_State *L);
void lua_pushboolean (lua_State *L, int bool);
void lua_pushnumber (lua_State *L, lua_Number n);
void lua_pushinteger (lua_State *L, lua_Integer n);
void lua_pushlstring (lua_State *L, const char *s, size_t len);
void lua_pushstring (lua_State *L, const char *s);
void lua_pushlightuserdata (lua_State *L, void *p);
*/

// PUSH BACK TO THE STACK //
    if(dest==2)
    {
        if(strstr(string,"**")!=NULL) // in case of 2D fields
        {
            return NULL;
        }
        else if(strchr(string,'*')!=NULL)  // in case of 1D fields
        {
            if(strstr(string,"GLubyte")!=NULL)
                sprintf(binded,"lua_pushstring(L, return_value)");
            else if(strstr(string,"GLvoid")!=NULL)
                sprintf(binded,"lua_pushlightuserdata(L, return_value)");
            else if(strstr(string,"void")!=NULL)
                sprintf(binded,"lua_pushlightuserdata(L, return_value)");
            else
                return NULL;
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

        else if(strstr(string,"GLboolean")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"BOOL")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");

        else if(strstr(string,"GLubyte")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"GLbyte")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");

        else if(strstr(string,"GLhandleARB")!=NULL)  // type of texture, it has 32bits, nothing else is important
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"GLenum")!=NULL)
            sprintf(binded,"lua_pushinteger(L, return_value)");
        else if(strstr(string,"GLvdpauSurfaceNV")!=NULL) // GLvdpauSurfaceNV - typedef GLintptr GLvdpauSurfaceNV, GLintprt = GLint *
            sprintf(binded,"luaglew_pusharray_int(L, return_value)");
        else
            return NULL;
    }

    if(dest==4)
    {
        string[strlen(string)-1]='\0';  //delete one *
        if(strstr(string,"**")!=NULL) // in case of 2D fields
        {
            return NULL;
        }
        else if(strchr(string,'*')!=NULL)  // in case of 1D fields
        {
            if(strstr(string,"GLubyte")!=NULL)
                sprintf(binded,"lua_pushstring(L, *return_value)");
            else if(strstr(string,"GLvoid")!=NULL)
                sprintf(binded,"lua_pushlightuserdata(L, *return_value)");
            else if(strstr(string,"void")!=NULL)
                sprintf(binded,"lua_pushlightuserdata(L, *return_value)");
            else
                return NULL;
        }
        else if(strstr(string,"GLint")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"unsigned int")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else  if(strstr(string,"int")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else  if(strstr(string,"GLbitfield")!=NULL)  // definovane ako unsigned int, je to bitova maska
            sprintf(binded,"lua_pushinteger(L, *return_value)");

        else if(strstr(string,"GLdouble")!=NULL)
            sprintf(binded,"lua_pushnumber(L, *return_value)");

        //else if(strstr(string,"GLenum")!=NULL)
            //sprintf(binded,"luaglew_pushenum(L, %d)");

        else if(strstr(string,"GLfloat")!=NULL)
            sprintf(binded,"lua_pushnumber(L, *return_value)");
        else if(strstr(string,"float")!=NULL)
            sprintf(binded,"lua_pushnumber(L, *return_value)");
        else if(strstr(string,"GLclampf")!=NULL)
            sprintf(binded,"lua_pushnumber(L, *return_value)");
        else if(strstr(string,"GLclampd")!=NULL)  // pravdepodobne clamp double
            sprintf(binded,"lua_pushnumber(L, *return_value)");

        else if(strstr(string,"GLushort")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"GLshort")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");

        //else if(strstr(string,"GLsizei")!=NULL)
          //  sprintf(binded,"luaL_checklong(L, %d)");
        //else if(strstr(string,"unsigned long")!=NULL)
          //  sprintf(binded,"luaL_checklong(L, %d)");

        else if(strstr(string,"GLboolean")!=NULL)
            sprintf(binded,"lua_pushboolean(L, *return_value)");
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_pushboolean(L, *return_value)");
        else if(strstr(string,"BOOL")!=NULL)
            sprintf(binded,"lua_pushboolean(L, *return_value)");

        else if(strstr(string,"GLubyte")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"GLbyte")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");

        else if(strstr(string,"GLhandleARB")!=NULL)  // type of texture, it has 32bits, nothing else is important
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"GLenum")!=NULL)
            sprintf(binded,"lua_pushinteger(L, *return_value)");
        else if(strstr(string,"GLvdpauSurfaceNV")!=NULL) // GLvdpauSurfaceNV - typedef GLintptr GLvdpauSurfaceNV, GLintprt = GLint *
            sprintf(binded,"luaglew_pusharray_int(L, *return_value)");
        else
            return NULL;
    }

    return binded;
}


// creates list of functions and wrapping code
int luaglew_get_funcs(FILE *from, FILE *funcs_prot_list, FILE *funcs_name_list)
{
    int i, j, flag, pocet, flag2, k;
    int position=0; // pozicia v spracovavanom stringu

    char str[400];  // riadok zo vstupneho suboru, ktory je nasledne spracovany
    char clean[400];  // precisteny str zo vstupu, bez duplicitnych medzier a inych zbytocnych bielych znakov
    char args[100];  // jeden konkretny argument (typ aj nazov), ktory sa posiela na spracovanie prislusnej funckie

    int return_num=0; //flag, ktory urcuje, ci funkcia vracia hodnotu. Ak je 1, tak return_string obsahuje navratovy typ
    char return_string[40];
    char function_name[100];  //meno funkcie
    char function_body[2000];  // telo funkcie
    char function_body_help[2000];  // pomocne telo funckie
    char function_prototype[1000];  // function prototype
    int ignoref = 0;
    int getFlag = 0;  //if it is glGet function, flag will be 1
    char getType[40];  // type of glGet parameter

    char arguments[400];  // zoznam vsetkych argumentov

    while(feof(from)==0)
    {
        if(fgets(str, 398, from) &&  // something getted
           (strstr(str, "gl") || strstr(str, "wgl")) &&  // functions start with gl or wgl
           !strstr(str, "http://") &&  // dont contain http
           !strstr(str,"typedef") &&  // dont contain http
           !strstr(str,"glX")  &&  // X Windows functions ignored
           !strstr(str,"Display")&&  // Windows functions ignored
           !strstr(str,"GL_") &&  // not constant
           !strstr(str,"WGL_")&&  // not constant
           !strstr(str,"HDC")  // HDC ignored
          )
        {

            return_num=0;
            return_string[0]='\0';
            function_name[0]='\0';
            function_body[0]='\0';
            arguments[0]='\0';
            function_prototype[0]='\0';
            position=0;
            j=0;
            ignoref = 0;
            getFlag = 0;

//-----------------------spracuvam kompletny funkcny prototyp na pozadovany tvar---------------------------//

// ocistim  string str od duplicitnych medzier a inych bielych znakov a ulozim do stringu clean
            for(i=1;i<=strlen(str);i++)
                if(!(str[i]==' ' && str[i]==str[i-1]) || !str[i]=='\n' || !str[i]=='\t')
                        clean[j++]=str[i];
            clean[j]='\0';
            strcpy(function_prototype,clean);

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
            return_string[i]='\0';

            if(strstr(return_string,"void")!=NULL && strchr(return_string,'*')==NULL)
                return_num=0;
            else
                return_num=1;

            //printf("%s\n",return_string);

//vyberiem nazov funkcie a vytvorim obalovaciu funkciu napr. static int luaglew_glViewport(lua_State *L)
            for(position++, i=0;position<400;position++, i++)
            {
                if(clean[position]!=' ' && clean[position]!='(')
                   function_name[i]=clean[position];
                else
                    break;
            }
            function_name[i]='\0';

// discover, if the function inst type of Get function
            if(strstr(function_name,"Get")!=NULL && return_num == 0)
                getFlag=1;


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

                    if(luaglew_typetobind(args,1,pocet)==NULL)
                        ignoref = 1;
                    else
                    {
                        sprintf(function_body_help,"%s, ",luaglew_typetobind(args,1,pocet));
                        strcat(function_body, function_body_help);
                    }

                    i+=2;
                    flag=0;

                }
                if(i==strlen(arguments))
                {
                    // string argumentov skoncil, treba vlozit posledny argument(ak je) a uzavriet funckiu
                    args[j]='\0';
                    if(strlen(args)>0)
                        {
                            if(luaglew_typetobind(args,1,pocet)==NULL)
                                ignoref = 1;
                            else
                            {
                                if(getFlag==1)  //argument is not checked from stack but inserted to the pointer
                                {
                                    for(k=0;k<strlen(args);k++)
                                    {
                                        getType[k]=args[k];
                                        if(args[k]== '*' && args[k+1]!='*')
                                        {
                                            k++;
                                            break;
                                        }
                                    }
                                    getType[k]='\0';  //end getType with null character

                                    sprintf(function_body_help,"return_value);\n",getType);
                                    strcat(function_body, function_body_help);
                                }
                                else
                                {
                                    sprintf(function_body_help,"%s);\n",luaglew_typetobind(args,1,pocet));
                                    strcat(function_body, function_body_help);
                                }
                            }
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
            if(return_num==0  && getFlag == 0)
            {
                sprintf(function_body_help,"\treturn 0;\n}\n");
                strcat(function_body,function_body_help);
            }
            else if(getFlag == 0)
            {
                if(luaglew_typetobind(args,1,pocet)==NULL)
                    ignoref = 1;
                else
                    sprintf(function_body_help,"\t%s;\n\treturn 1;\n}\n",luaglew_typetobind(return_string,2,pocet));
                strcat(function_body,function_body_help);
            }




// everything will be now added to the text files

            // //####%s added due to deleting duplicates, it will be later deleted
            if(ignoref==0)
            {
                // to the wrapping code
                funcsCounter++;
                fprintf(funcs_prot_list,"//####%s\n",function_name);
                fprintf(funcs_prot_list,"// %s",function_prototype);
                fprintf(funcs_prot_list,"#ifdef %s\n",function_name);
                fprintf(funcs_prot_list,"static int luaglew_%s(lua_State *L) {\n",function_name);
                if(getFlag == 1)
                    fprintf(funcs_prot_list,"\t%s return_value;\n",getType);
                fprintf(funcs_prot_list,"%s",function_body);
                if(getFlag == 1)
                    fprintf(funcs_prot_list,"\t%s;\n\treturn 1;\n}\n",luaglew_typetobind(getType,4,pocet));
                fprintf(funcs_prot_list,"#endif\n\n");

                // to the registration table
                fprintf(funcs_name_list,"//####%s\n",function_name);
                fprintf(funcs_name_list,"#ifdef %s\n",function_name);
                fprintf(funcs_name_list,"\t{\"%s\", luaglew_%s},\n",function_name,function_name);
                fprintf(funcs_name_list,"#endif\n");
            }
        }
    }

    return 0;
}

// prehladava path a vsetky subory ktore najde posle konkretnym funkciam na spracovanie
// funguje, prehlada vsetky subory a vypise pocet spracovanych suborov
int luaglew_get_lists(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
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
            if(strcmp(ent->d_name, ".")!=0 && strcmp(ent->d_name, "..")!=0)
            {
                printf("Opening file ");
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

                luaglew_get_consts(f,consts_list);

                fseek(f,0,SEEK_SET);  //from beginning
                luaglew_get_funcs(f, funcs_prot_list, funcs_name_list);

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

// main function
int main()
{
// READING PROCESS
    printf("Reading in progress\n\n");

    FILE *consts_list, *funcs_list, *funcs_binding_code;

    consts_list = fopen("../consts_list.c","w");
    funcs_list = fopen("../funcs_list.c","w");
    funcs_binding_code = fopen("../funcs_binding_code.c","w");

    // header for constants
    fprintf(consts_list,"static const LUAGLEW_CONST const_list[] = {\n");

    // header for functions
    fprintf(funcs_list,"static const struct luaL_Reg luaglew_lib[] = {\n");

    luaglew_get_lists("../../core", consts_list, funcs_list, funcs_binding_code);

    //trailer for constants
    fprintf(consts_list,"\t{0, 0}\n};\n");

    //trailer for functions
    fprintf(funcs_list,"\t{0, 0}\n};\n");

    fclose(consts_list);
    fclose(funcs_list);
    fclose(funcs_binding_code);

    //statistic
    printf("\n\tfunctions\t%d\n\tconstants\t%d\n",funcsCounter,constsCounter);
    printf("__________________________________________________________");

// DUPLICATES DELETING PROCESS
    printf("\n\nAnalysing duplicates in progress\n\n");

    FILE *funcs_list_clean, *funcs_binding_code_clean;

    funcs_list = fopen("../funcs_list.c","r");
    funcs_list_clean = fopen("../funcs_list_clean.c","w");
    funcs_binding_code = fopen("../funcs_binding_code.c","r");
    funcs_binding_code_clean = fopen("../funcs_binding_code_clean.c","w");

// analyze whole file and write function to the clean version only if it isnt duplicate

    long int offset = 0;  // offset in file
    char funcName[100];  // name of function
    char line[100];
    funcName[0]='\0';  //
    int flag = 0;  // flag is 1, when funcName contains name of function
    int dupl = 0;  // 1 if duplicate found

// FUNCS NAMES CHECKING FOR DUPLICATES
    int duplCount1 = 0;
    while(1)  // outer loop
    {
        if(fgets(funcName,98,funcs_list)==NULL)
            break;
        if(strstr(funcName,"//####"))
        {
            flag=1;
            offset = ftell(funcs_list);
        }
        else
            fputs(funcName,funcs_list_clean);

        if(flag==1)  // inner loop
        {
            dupl = 0;
            fseek(funcs_list, offset, SEEK_SET);  // starts from offset and will finding string line
            while(feof(funcs_list)==0)
            {
                fgets(line,98,funcs_list);
                if(strcmp(line,funcName)==0)
                    dupl=1;
            }
            if(dupl==0)  //duplicate not found, function can be written to the clean file
            {
                fseek(funcs_list,offset,SEEK_SET);
                //fputs(funcName,funcs_list_clean);
                fgets(funcName,98,funcs_list);
                fputs(funcName,funcs_list);
            }
            else  // duplicate lines must be throwed away
            {
                duplCount1++;
                fseek(funcs_list,offset,SEEK_SET);
                line[0]='\0';
                while(strstr(line,"//####")==0)
                {
                    offset = ftell(funcs_list);
                    fgets(line,98,funcs_list);
                }
            }

        }
        if(flag == 1)
        {
            fseek(funcs_list,offset,SEEK_SET);
            flag = 0;
        }
        if(flag == 0 && feof(funcs_list))
            break;
    }
    printf("In function names was deleted %d duplicates\n",duplCount1);

// FUNCS PROTOTYPES CHECKING FOR DUPLICATES
    int duplCount2=0;
    while(1)  // outer loop
    {
        fgets(funcName,98,funcs_binding_code);
        if(strstr(funcName,"//####"))
        {
            flag=1;
            offset = ftell(funcs_binding_code);
        }
        else
            fputs(funcName,funcs_binding_code_clean);

        if(flag==1)  // inner loop
        {
            dupl = 0;
            fseek(funcs_binding_code, offset, SEEK_SET);  // stars from offset and will finding string line
            while(feof(funcs_binding_code)==0)
            {
                fgets(line,98,funcs_binding_code);
                if(strcmp(line,funcName)==0)
                    dupl=1;
            }
            if(dupl==0)  //duplicate not found, function can be written to the clean file
            {
                fseek(funcs_binding_code,offset,SEEK_SET);
                //fputs(funcName,funcs_binding_code_clean);
                fgets(funcName,98,funcs_binding_code);
                fputs(funcName,funcs_binding_code);
            }
            else  // duplicate lines must be throwed away
            {
                duplCount2++;
                fseek(funcs_binding_code,offset,SEEK_SET);
                line[0]='\0';
                while(strstr(line,"//####")==0)
                {
                    offset = ftell(funcs_binding_code);
                    fgets(line,98,funcs_binding_code);
                }
            }
        }
        if(flag == 1)
        {
            fseek(funcs_binding_code,offset,SEEK_SET);
            flag = 0;
        }
        if(flag == 0 && feof(funcs_binding_code))
            break;
    }
    printf("In function binding code was deleted %d duplicates\n",duplCount2);

    if(duplCount1 == duplCount2)
        printf("\n__________________ OK (%d duplicates both) ________________\n",duplCount1);
    else
        printf("\n__________________ERROR in duplicates ________________\n");

    fclose(funcs_list);
    fclose(funcs_binding_code);
    fclose(funcs_list_clean);
    fclose(funcs_binding_code_clean);

    return 0;
}
