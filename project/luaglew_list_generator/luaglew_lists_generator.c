<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
/* _____________ luaGLEW GENERATOR ______________
 * Generator zoznamu konstant - consts_list.c
 * Generetor zoznamu nazvov funckii - funcs_list.c
 * Generetor zoznamu funckii s prototypmi - funcs_binding_code.c
 */

<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
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


<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
#include <unistd.h>

// funcsCounter funckii s prototypm, pocet2 nazvov funkcii a constsCounter konstant
int funcsCounter=0, constsCounter=0;

// function gets list of constants
int luaglew_get_consts(FILE *from, FILE *consts_list)
{
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09

// pocet1 funckii s prototypm, pocet2 nazvov funkcii a pocet3 konstant
int pocet1=0, pocet2=0, pocet3=0;

<<<<<<< HEAD
// function gets list of constants
=======
// ziska zoznam konstant
// este su niektore duplicitne - asi necham cely ten zoznam prebehnut unicom bez sortu, duplictne by mali byt za sebu, otestujem unicom zo sortom
// treba to aj sortnut, lebo konstanty su v suboroch duplicitne. cize hlavicku az nakonec treba vpisat
// inak hotovo
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
int get_consts_list(FILE *from, FILE *consts_list)
{

<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
    char str[200];

    while(feof(from)==0)
    {
<<<<<<< HEAD
        //constants start with GL_ or WGL_, we ignore GLX_ constants and http:// links
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "WGL_")) && !strstr(str,"http://") && !strstr(str, "GLX_"))
        {
           constsCounter++;
           fprintf(consts_list,"#ifdef %s\n\t{\"%s\", %s},\n#endif\n",str,str,str);
=======
<<<<<<< HEAD
        //constants start with GL_ or WGL_, we ignore GLX_ constants and http:// links
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "WGL_")) && !strstr(str,"http://") && !strstr(str, "GLX_"))
<<<<<<< HEAD
        {
           constsCounter++;
           fprintf(consts_list,"#ifdef %s\n\t{\"%s\", %s},\n#endif\n",str,str,str);
=======
<<<<<<< HEAD
        //constants start with GL_ or WGL_, we ignore GLX_ constants and http:// links
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "WGL_")) && !strstr(str,"http://") && !strstr(str, "GLX_"))
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
        // konstatny zacinaju na GL_
        // aj niektore internetove definicie obsahuju GL_, preto su konstanty len tie bez http://
        if(fscanf(from,"%s",str) && (strstr(str, "GL_") || strstr(str, "GLX_") || strstr(str, "WGL_")) && !strstr(str,"http://"))
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
        {
           pocet3++;
           fprintf(consts_list,"\t{\"%s\", %s},\n",str,str);
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
        }
    }
    return 0;
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
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

<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
// dostane GLint arg a vyhodi luaL_checkint(L, number)
// ak je dest 1, funckia spravi string, ktory ziska premennu zo zasobnika a checkne jej typ
// ak je dest 2, funckia pushne premennu na zasobnik
// number je poradie na zasobniku. pri dest 2 nema zmysel
<<<<<<< HEAD
char *luaglew_typetobind(char *string, int dest, int number)
{
=======
<<<<<<< HEAD
<<<<<<< HEAD
char *luaglew_typetobind(char *string, int dest, int number)
{
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
char *luaglew_typetobind_function(char *string, int dest, int number)
{
<<<<<<< HEAD
=======
    FILE *pom;
    pom=fopen("../pom.txt","a");
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

// GET 2D FIELDS //
        if(strstr(string,"**")!=NULL)
        {
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
// 2D FIELDS //
        if(strstr(string,"**")!=NULL)
        {
<<<<<<< HEAD

=======
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            if(strstr(string,"GLchar")!=NULL)
                sprintf(binded,"(GLchar **)luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"char")!=NULL)
                sprintf(binded,"luaglew_checkarray_2char(L, %d)", number);
            else if(strstr(string,"GLvoid")!=NULL || strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_checkarray_2void(L, %d)", number);
            else
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                return NULL;
        }

// GET 1D FIELDS //
        else if(strchr(string,'*')!=NULL)
        {
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
                sprintf(binded,"**check nespracovane 2-rozmerne pole typu %s **", type);
        }
// 1D FIELDS //
        else if(strchr(string,'*')!=NULL)
        {
<<<<<<< HEAD

=======
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                sprintf(binded,"(GLdouble *)luaglew_checkarray_double(L, %d)", number);
            else if(strstr(string,"GLfloat")!=NULL)
                sprintf(binded,"(GLfloat *)luaglew_checkarray_float(L, %d)", number);
            else if(strstr(string,"float")!=NULL)
                sprintf(binded,"(float *)luaglew_checkarray_float(L, %d)", number);
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
                sprintf(binded,"(GLdouble *)luaglew_checkarray_doublefloat(L, %d)", number);
            else if(strstr(string,"GLfloat")!=NULL)
                sprintf(binded,"(GLfloat *)luaglew_checkarray_doublefloat(L, %d)", number);
            else if(strstr(string,"float")!=NULL)
                sprintf(binded,"(float *)luaglew_checkarray_doublefloat(L, %d)", number);
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
            else if(strstr(string,"GLXHyperpipeConfigSGIX")!=NULL)
                sprintf(binded,"luaglew_checkarray_GLXHyperpipeConfigSGIX(L, %d)", number);
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
            else if(strstr(string,"GLXHyperpipeConfigSGIX")!=NULL)
                sprintf(binded,"luaglew_checkarray_GLXHyperpipeConfigSGIX(L, %d)", number);
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            else if(strstr(string,"GLvdpauSurfaceNV")!=NULL)
                sprintf(binded,"luaglew_checkarray_GLvdpauSurfaceNV(L, %d)", number);
            else if(strstr(string,"GetProcAddress")!=NULL)
                sprintf(binded,"luaglew_checkarray_GetProcAddress(L, %d)", number);
            else if(strstr(string,"GetProcAddressARB")!=NULL)
                sprintf(binded,"luaglew_checkarray_GetProcAddressARB(L, %d)", number);
            else if(strstr(string,"HGPUNV")!=NULL)
                sprintf(binded,"luaglew_checkarray_HGPUNV(L, %d)", number);
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            else
                return NULL;
        }

// GET ALL OTHER TYPES //
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09

            else sprintf(binded,"**check 1-rozmerne pole typu %s **", type);
        }
// ALL OTHER TYPES //
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
        else if(strstr(string,"GLint")!=NULL)
            sprintf(binded,"(GLint)luaL_checkint(L, %d)", number);
        else if(strstr(string,"unsigned int")!=NULL)
            sprintf(binded,"(unsigned int)luaL_checkint(L, %d)", number);
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
        else if(strstr(string,"GLhandleARB")!=NULL)
            sprintf(binded,"(GLhandleARB)luaL_checkint(L, %d)", number);
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
        else if(strstr(string,"UINT")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
<<<<<<< HEAD
=======
=======
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
        else if(strstr(string,"GLuint")!=NULL)
            sprintf(binded,"(GLuint)luaL_checkint(L, %d)", number);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
        else // HDC, HGPUNV, PGPU_DEVICE
            return NULL;
=======
<<<<<<< HEAD
<<<<<<< HEAD
        else // HDC, HGPUNV, PGPU_DEVICE
            return NULL;
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09

        else
        {
            //fprintf(pom,"%s\n",type);
            sprintf(binded,"**check nespracovany typ %s **", type);
        }
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
    }

/*
LUA C API push functions

void lua_pushnil (lua_State *L);
void lua_pushboolean (lua_State *L, int bool);
void lua_pushnumber (lua_State *L, lua_Number n);
void lua_pushinteger (lua_State *L, lua_Integer n);
void lua_pushlstring (lua_State *L, const char *s, size_t len);
void lua_pushstring (lua_State *L, const char *s);
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
*/

    if(dest==2) // push do zasobnika
    {
        if(strstr(string,"**")!=NULL) // obsahuje pointer, treba volat funkcie na ziskanie poli zo stacku
        {
            sprintf(binded,"**push (2-rozmerne pole typu %s)  **", type);
        }
        else if(strchr(string,'*')!=NULL)
        {
<<<<<<< HEAD
            if(strstr(string,"GLubyte")!=NULL)
=======
            if(strstr(string,"Display")!=NULL)
                sprintf(binded,"luaglew_pusharray_display(L, return_value)");
            else if(strstr(string,"GLXFBConfig")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXFBConfig(L, return_value)");
            else if(strstr(string,"GLXHyperpipeConfigSGIX")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXHyperpipeConfigSGIX(L, return_value)");
            else if(strstr(string,"GLXHyperpipeNetworkSGIX")!=NULL)
                sprintf(binded,"luaglew_pusharray_GLXHyperpipeNetworkSGIX(L, return_value)");
            else if(strstr(string,"GLubyte")!=NULL)
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
                sprintf(binded,"luaglew_pusharray_GLubyte(L, return_value)");
            else if(strstr(string,"GLvoid")!=NULL)
                sprintf(binded,"(GLvoid *)luaglew_pusharray_void(L, return_value)");
            else if(strstr(string,"void")!=NULL)
                sprintf(binded,"luaglew_pusharray_void(L, return_value)");
            else if(strstr(string,"XVisualInfo")!=NULL)
                sprintf(binded,"luaglew_pusharray_XVisualInfo(L, return_value)");
<<<<<<< HEAD
=======

>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
            else sprintf(binded,"** push(1-rozmerne pole typu %s) **", type);
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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

<<<<<<< HEAD
        else if(strstr(string,"GLboolean")!=NULL)
=======
<<<<<<< HEAD
<<<<<<< HEAD
        else if(strstr(string,"GLboolean")!=NULL)
=======
        else if(strstr(string,"GLboolean")!=NULL)  // check funckie neexistuju, vyuzijem lua_toboolean
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
        else if(strstr(string,"GLboolean")!=NULL)  // check funckie neexistuju, vyuzijem lua_toboolean
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"Bool")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");
        else if(strstr(string,"BOOL")!=NULL)
            sprintf(binded,"lua_pushboolean(L, return_value)");

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
    return binded;
}


// creates list of functions and wrapping code
int luaglew_get_funcs(FILE *from, FILE *funcs_prot_list, FILE *funcs_name_list)
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
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
<<<<<<< HEAD

=======
    fclose(pom);
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
    //printf("%s -> %s\n",string,binded);
    return binded;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////// ziska zoznam funkcii s prototypmi a vytvori obalovacie funkcie ///////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
int get_func_prot_list(FILE *from, FILE *funcs_prot_list)
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
{
    int i, j, flag, pocet, flag2;
    int position=0; // pozicia v spracovavanom stringu

    char str[400];  // riadok zo vstupneho suboru, ktory je nasledne spracovany
    char clean[400];  // precisteny str zo vstupu, bez duplicitnych medzier a inych zbytocnych bielych znakov
    char args[100];  // jeden konkretny argument (typ aj nazov), ktory sa posiela na spracovanie prislusnej funckie

    int return_num=0; //flag, ktory urcuje, ci funkcia vracia hodnotu. Ak je 1, tak return_string obsahuje navratovy typ
    char return_string[40];
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
    char function_name[100];  //meno funkcie
    char function_body[2000];  // telo funkcie
    char function_body_help[2000];  // pomocne telo funckie
    char function_prototype[1000];  // function prototype
    int ignoref = 0;

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

<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09

    char function_name[100];  //meno funkcie
    char function_body[2000];  // telo funkcie
    char function_body_help[2000];  // pomocne telo funckie

    char arguments[400];  // zoznam vsetkych argumentov

<<<<<<< HEAD
    FILE *pom;
    pom=fopen("../pom.txt","a");

    while(feof(from)==0)
    {
        //functions begin with white space and gl or wgl, we ignore all glx functions, typedefs, Display functions
        if(fgets(str, 398, from) && (strstr(str, " gl") || strstr(str, " wgl")) && !strstr(str, "http://") && !strstr(str,"typedef") && !strstr(str,"glX")  && !strstr(str,"Display"))
        {

=======
    while(feof(from)==0)
    {
// funkcie zacinaju gl alebo wgl
// aj niektore definicie obsahuju gl, ale kazda funkcia ma pred nazvom presne jednu medzeru - narvatova_hodnota funkcia(atributy), neobsahuje typedef
        if(fgets(str, 398, from) && (strstr(str, " gl") || strstr(str, " wgl")) && !strstr(str, "http://") && !strstr(str,"typedef"))
        {
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
            pocet1++;
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            return_num=0;
            return_string[0]='\0';
            function_name[0]='\0';
            function_body[0]='\0';
            arguments[0]='\0';
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
            function_prototype[0]='\0';
            position=0;
            j=0;
            ignoref = 0;
<<<<<<< HEAD
=======
=======
            position=0;
            j=0;
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
            position=0;
            j=0;
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

//-----------------------spracuvam kompletny funkcny prototyp na pozadovany tvar---------------------------//

// ocistim  string str od duplicitnych medzier a inych bielych znakov a ulozim do stringu clean
            for(i=1;i<=strlen(str);i++)
                if(!(str[i]==' ' && str[i]==str[i-1]) || !str[i]=='\n' || !str[i]=='\t')
                        clean[j++]=str[i];
            clean[j]='\0';
<<<<<<< HEAD
            strcpy(function_prototype,clean);
=======
<<<<<<< HEAD
<<<<<<< HEAD
            strcpy(function_prototype,clean);
=======
            fprintf(funcs_prot_list,"// %s",clean);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
            fprintf(funcs_prot_list,"// %s",clean);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

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
<<<<<<< HEAD
            return_string[i]='\0';
=======
<<<<<<< HEAD
<<<<<<< HEAD
            return_string[i]='\0';
=======
            return_string[position]='\0';
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
            return_string[position]='\0';
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

            if(strstr(return_string,"void")!=NULL && strchr(return_string,'*')==NULL)
                return_num=0;
            else
                return_num=1;

<<<<<<< HEAD
            //printf("%s\n",return_string);
=======
<<<<<<< HEAD
<<<<<<< HEAD
            //printf("%s\n",return_string);
=======
            //printf("%s a return %d\n",return_string,return_num);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
            //printf("%s a return %d\n",return_string,return_num);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

//vyberiem nazov funkcie a vytvorim obalovaciu funkciu napr. static int luaglew_glViewport(lua_State *L)
            for(position++, i=0;position<400;position++, i++)
            {
                if(clean[position]!=' ' && clean[position]!='(')
                   function_name[i]=clean[position];
                else
                    break;
            }
            function_name[i]='\0';

<<<<<<< HEAD


=======
<<<<<<< HEAD
<<<<<<< HEAD


=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
            //printf("function name %s\n",function_name);

            fprintf(funcs_prot_list,"static int luaglew_%s(lua_State *L) {\n",function_name);

<<<<<<< HEAD
            //generating list of functions with double pointer in arguments for detail analysis
            if(strstr(clean,"**"))
                fprintf(pom,"%s\n",clean);



=======
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                    if(luaglew_typetobind(args,1,pocet)==NULL)
                        ignoref = 1;
                    else
                    {
                        sprintf(function_body_help,"%s, ",luaglew_typetobind(args,1,pocet));
                        strcat(function_body, function_body_help);
                    }
                    i+=2;
                    flag=0;

<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
                    sprintf(function_body_help,"%s, ",luaglew_typetobind_function(args,1,pocet));
                    strcat(function_body, function_body_help);
                    i+=2;
                    flag=0;
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                }
                if(i==strlen(arguments))
                {
                    // string argumentov skoncil, treba vlozit posledny argument(ak je) a uzavriet funckiu
                    args[j]='\0';
                    if(strlen(args)>0)
                        {
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                            if(luaglew_typetobind(args,1,pocet)==NULL)
                                ignoref = 1;
                            else
                            {
                                sprintf(function_body_help,"%s);\n",luaglew_typetobind(args,1,pocet));
                                strcat(function_body, function_body_help);
                            }
<<<<<<< HEAD
=======
=======
                            sprintf(function_body_help,"%s);\n",luaglew_typetobind_function(args,1,pocet));
                            strcat(function_body, function_body_help);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
                            sprintf(function_body_help,"%s);\n",luaglew_typetobind_function(args,1,pocet));
                            strcat(function_body, function_body_help);
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                if(luaglew_typetobind(args,1,pocet)==NULL)
                    ignoref = 1;
                else
                    sprintf(function_body_help,"\t%s;\n\treturn 1;\n}\n",luaglew_typetobind(return_string,2,99));
            }

            strcat(function_body,function_body_help);

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
                fprintf(funcs_prot_list,"%s",function_body);
                fprintf(funcs_prot_list,"#endif\n\n");
                // to the registration table
                fprintf(funcs_name_list,"//####%s\n",function_name);
                fprintf(funcs_name_list,"#ifdef %s\n",function_name);
                fprintf(funcs_name_list,"\t{\"%s\", luaglew_%s},\n",function_name,function_name);
                fprintf(funcs_name_list,"#endif\n");
            }
        }
    }

<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
                sprintf(function_body_help,"\t%s;\n\treturn 1;\n}\n",luaglew_typetobind_function(return_string,2,99));
            }

            strcat(function_body,function_body_help);
            fprintf(funcs_prot_list,"%s\n",function_body);
        }
    }
<<<<<<< HEAD
    fclose(pom);
=======
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd

    return 0;
}

<<<<<<< HEAD
//function gets list of functions
=======
// ziska zoznam funkcii bez prototypov
// malo by byt dobre
// treba ale skontrolovat ci su tam vsetky funkcie
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
int get_func_name_list(FILE *from, FILE *funcs_name_list)
{
    char str[200];

    while(feof(from)==0)
    {
        // funkcie zacinaju gl
        // neobsahuju http://
<<<<<<< HEAD
        if(fscanf(from, " %s", str) && strstr(str, "gl") && !strstr(str, "http://") &&!strstr(str,"GL") && !strstr(str,"glX")&& !strstr(str,"glx"))
=======
        if(fscanf(from, " %s", str) && strstr(str, "gl") && !strstr(str, "http://") &&!strstr(str,"GL"))
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
        {
            pocet2++;
            fprintf(funcs_name_list,"\t{\"%s\", luaglew_%s},\n",str,str);
        }
    }
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
    return 0;
}

// prehladava path a vsetky subory ktore najde posle konkretnym funkciam na spracovanie
// funguje, prehlada vsetky subory a vypise pocet spracovanych suborov
<<<<<<< HEAD
int luaglew_get_lists(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
=======
<<<<<<< HEAD
<<<<<<< HEAD
int luaglew_get_lists(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
=======
int get_list(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
int get_list(char *path, FILE *consts_list, FILE *funcs_name_list, FILE *funcs_prot_list)
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
                luaglew_get_consts(f,consts_list);

                fseek(f,0,SEEK_SET);  //from beginning
                luaglew_get_funcs(f, funcs_prot_list, funcs_name_list);
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
                get_consts_list(f,consts_list);

                fseek(f,0,SEEK_SET);  //znova od zaciatku
                get_func_prot_list(f,funcs_prot_list);

                fseek(f,0,SEEK_SET);
                get_func_name_list(f,funcs_name_list);
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

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

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25
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
<<<<<<< HEAD
=======
=======
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09

// main otvori vsetky potrebne subory
// vypise hlavicky potrebne v suboroch
// spusti prehladavanie a pracovanie priecinku s definiciami
int main()
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
    FILE *consts_list, *funcs_list, *funcs_binding_code;

    consts_list = fopen("../consts_list.txt","w");
    funcs_list = fopen("../funcs_list.txt","w");
    funcs_binding_code = fopen("../funcs_binding_code.txt","w");

<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
=======
    FILE *consts_list, *funcs_name_list, *funcs_prot_list;

    consts_list = fopen("../consts_list.txt","w");
    funcs_name_list = fopen("../funcs_name_list.txt","w");
    funcs_prot_list = fopen("../funcs_prot_list.txt","w");
>>>>>>> 4dcf673284afe5253c2d8c66d1eca4c41b309e97
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd

    // uvodna hlavicka pre konstanty
    fprintf(consts_list,"static const LUAGLEW_CONST const_list[] = {\n");

    //uvodna hlavicka pre nazvy funkcii
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
    fprintf(funcs_list,"static const struct luaL_Reg luaglew_lib[] = {\n");



    get_list("../../core", consts_list, funcs_list, funcs_binding_code);
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
=======
    fprintf(funcs_name_list,"static const struct luaL_Reg luaglew_lib[] = {\n");

    get_list("../../core",consts_list, funcs_name_list, funcs_prot_list);
>>>>>>> 4dcf673284afe5253c2d8c66d1eca4c41b309e97
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd

    //prida sentinel konstantam
    fprintf(consts_list,"\t{NULL, NULL}\n};\n");

    //prida sentinel a funkciu na reegistraciu funkcii
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd
    fprintf(funcs_list,"\t{NULL, NULL}\n};\n");
    fprintf(funcs_list,"\nint luaopen_luaglew (lua_State *L) {\n\tluaL_register(L, \"luaglew\", luaglew_lib);\n\treturn 1;\n}");



    fclose(consts_list);
    fclose(funcs_list);
    fclose(funcs_binding_code);
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
=======
    fprintf(funcs_name_list,"\t{NULL, NULL}\n};\n");
    fprintf(funcs_name_list,"\nint luaopen_luaglew (lua_State *L) {\n\tluaL_register(L, \"luaglew\", luaglew_lib);\n\treturn 1;\n}");

    fclose(consts_list);
    fclose(funcs_name_list);
    fclose(funcs_prot_list);
>>>>>>> 4dcf673284afe5253c2d8c66d1eca4c41b309e97
>>>>>>> 9b429be17b0df11d6ed9fdb6a75326fbe2fc0563
>>>>>>> bd917aecc4fb7350ace8d51da861a89e641773cd

    printf("\n\tfunkcii s prototypom   %d\n\tfunkcii bez prototypu  %d\n\tkonstant\t       %d\n",pocet1,pocet2,pocet3);
    printf("__________________________________________________________");
<<<<<<< HEAD
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
=======
>>>>>>> 940bd92024b3d37ca8b7e96e4f0a2df26b84ad09
>>>>>>> 0d0324c8534c04a8067636c3a684ac031a69fa25

    return 0;
}
