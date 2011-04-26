
/* luaglew */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

#include "GL/glew.h"
#include "GL/wglew.h"
//#include "GL/glxew.h"  // X11 missing

//////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------- GLEW CONSTANTS BINDING-------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
//------------------------ CONSTANT STRUCTURE --------------------------//
typedef struct luaglew_const
{
    const char *name;
    int value;
} LUAGLEW_CONST;

//////////////////////////////////////////////////////////////////////////
//-------------------- CONSTANTS BINDINDING FIELD ----------------------//
