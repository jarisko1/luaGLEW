
//////////////////////////////////////////////////////////////////////////
//------------------ CONSTANTS BINDINDING FUNCTION ---------------------//
//////////////////////////////////////////////////////////////////////////
int luaglew_const_bind(lua_State *L)
{
    int i;

    for(i=0;const_list[i].name!=NULL;i++)
    {
        lua_pushnumber(L,const_list[i].value);
        lua_setglobal(L,const_list[i].name);
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//---------------------- GLEW FUNCTIONS BINDING -------------------------//
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//----------------------- FUNCTIONS DEFINITIONS -------------------------//
///////////////////////////////////////////////////////////////////////////

///////////////////////////// MINE FUNCTIONS //////////////////////////////

static int luaglew_checkenum(lua_State *L, int index)
{
    int i, value=-1;
    const char *enumer=luaL_checkstring(L,index);

    for(i=0;const_list[i].name!=NULL;i++)
    {
        if(strcmp(const_list[i].name,enumer)==0)
        {
            value = const_list[i].value;
            break;
        }
    }
    if (value==-1)
        fprintf(stderr,"Error: %s enum does not exist!\n",enumer);
    return value;
}

/////////////////////// CHECK FIELDS 2D (char, void) ////////////////////////

// 2D VOID  = 1D ARRAY OF LIGHT USERDATA
static void **luaglew_checkarray_2void(lua_State *L, int index)
{
	int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

     void **pole = (void **) malloc(n * sizeof(void *));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        //pole[i]=(void *)luaL_checkany(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 2D CHAR = 1D STRING
static char **luaglew_checkarray_2char(lua_State *L, int index)
{
    int n, i;
    char str[300];

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    char **pole = (char **) malloc(n*sizeof(char *));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        strcpy(str,luaL_checkstring(L, -1));
        pole[i]=(char *) malloc((strlen(str))*sizeof(char *));
        strcpy(pole[i],str);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}
/////////////////////// CHECK FIELDS 1D (boolean, byte, ubyte, char, double, enum, float, int, unit, short, ushort, long(sizei), ulong) ///////////

// 1D BOOLEAN
static int *luaglew_checkarray_boolean(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    int *pole = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=lua_toboolean(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D BYTE
static short *luaglew_checkarray_byte(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    char *pole = (short *) malloc(n*sizeof(char));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D UBYTE
static unsigned short *luaglew_checkarray_ubyte(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    unsigned char *pole = (unsigned short *) malloc(n*sizeof(unsigned char));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D VOID = 1 USERDATUM
static void *luaglew_checkarray_void(lua_State *L, int index)
{
	int n1, n2, i, j;

    luaL_checktype(L, index, LUA_TTABLE);
    n1 = luaL_getn(L, index);

    char **pole = (char **) malloc(n1 * sizeof(char *));

    for (i = 0; i < n1; i++) {
        lua_rawgeti(L, index, i+1);

        luaL_checktype(L, index+1, LUA_TTABLE);
        n2 = luaL_getn(L, index+1);
        pole[i]=(char *) malloc(n2 * sizeof(char));
        for(j = 0; j < n2; j++)
        {
            lua_rawgeti(L, index+1, j+1);
            pole[i][j]=luaL_checkint(L, -1);
            lua_remove(L, -1);
        }
        lua_remove(L, -1);
    }
    lua_remove(L, -1);

	char *newpole = (char *) malloc(n1 * n2 * sizeof(char));
	int pos = 0;

	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			newpole[pos++]=pole[i][j];
    return newpole;
}

// 1D CHAR = 1 STRING
static char *luaglew_checkarray_char(lua_State *L, int index)
{
    char str[300];
    char *pole;

    strcpy(str,luaL_checkstring(L, index));
    pole=(char *) malloc((strlen(str))*sizeof(char *));
    strcpy(pole,str);
    lua_remove(L, -1);

    return pole;
}

// 1D DOUBLE
static double *luaglew_checkarray_double(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    double *pole = (double *) malloc(n*sizeof(double));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=(double)luaL_checknumber(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D ENUM
static int *luaglew_checkarray_enum(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

   int *pole = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaglew_checkenum(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

//1D FLOAT
static float *luaglew_checkarray_float(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

   float *pole = (float *) malloc(n*sizeof(float));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=(float)luaL_checknumber(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D INT
static int *luaglew_checkarray_int(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    int *pole = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D UINT
static unsigned int *luaglew_checkarray_uint(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    unsigned int *pole = (unsigned int *) malloc(n*sizeof(unsigned int));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D SHORT
static short *luaglew_checkarray_short(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    short *pole = (short *) malloc(n*sizeof(short));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D USHORT
static unsigned short *luaglew_checkarray_ushort(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    unsigned short *pole = (unsigned short *) malloc(n*sizeof(unsigned short));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checkint(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D LONG
static long *luaglew_checkarray_long(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    long *pole = (long *) malloc(n*sizeof(long));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checklong(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 1D ULONG
static unsigned long *luaglew_checkarray_ulong(lua_State *L, int index)
{
    int n, i;

    luaL_checktype(L, index, LUA_TTABLE);
    n = luaL_getn(L, index);

    unsigned long *pole = (unsigned long *) malloc(n*sizeof(unsigned long));

    for (i = 0; i < n; i++) {
        lua_rawgeti(L, index, i+1);
        pole[i]=luaL_checklong(L, -1);
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 2D INT
static int **luaglew_checkarray_2int(lua_State *L, int index)
{
    int n1, n2, i, j;

    luaL_checktype(L, index, LUA_TTABLE);
    n1 = luaL_getn(L, index);

    int **pole = (int **) malloc(n1 * sizeof(int *));

    for (i = 0; i < n1; i++) {
        lua_rawgeti(L, index, i+1);

        luaL_checktype(L, index+1, LUA_TTABLE);
        n2 = luaL_getn(L, index+1);
        pole[i]=(int *) malloc(n2 * sizeof(int));
        for(j = 0; j < n2; j++)
        {
            lua_rawgeti(L, index+1, j+1);
            pole[i][j]=luaL_checkint(L, -1);
            lua_remove(L, -1);
        }
        lua_remove(L, -1);
    }
    lua_remove(L, -1);
    return pole;
}

// 2D TEST
static int luaglew_test_function(lua_State *L)
{
    char **pole;
    int i;
    pole = luaglew_checkarray_2char(L, 1);
    for(i=0;i<3;i++)
        printf("%s ",pole[i]);
    printf("\n");
    return 0;
}

/////////////////////// PUSH FIELDS 1D (int) ////////////////////////

//PUSH INT 1D
static void luaglew_pusharray_int(lua_State *L, int *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushinteger(L, array[i]);
    lua_settable(L, -3);
  }
}

//PUSH USHORT 1D
static void luaglew_pusharray_ushort(lua_State *L, unsigned short *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushinteger(L, array[i]);
    lua_settable(L, -3);
  }
}

//PUSH UNSIGNED INT 1D
static void luaglew_pusharray_uint(lua_State *L, unsigned int *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushinteger(L, array[i]);
    lua_settable(L, -3);
  }
}

//PUSH DOUBLE 1D
static void luaglew_pusharray_double(lua_State *L, double *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushnumber(L, array[i]);
    lua_settable(L, -3);
  }
}

//PUSH FLOAT 1D
static void luaglew_pusharray_float(lua_State *L, float *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushnumber(L, array[i]);
    lua_settable(L, -3);
  }
}

//PUSH BOOLEAN 1D
static void luaglew_pusharray_boolean(lua_State *L, int *array, int size)
{
  int i;
  lua_createtable(L, size, 0);
  for(i = 0; i < size; i++)
  {
    lua_pushinteger(L, i+1);
    lua_pushboolean(L, array[i]);
    lua_settable(L, -3);
  }
}




/////////////////////// OPENGL FUNCTIONS //////////////////////////
