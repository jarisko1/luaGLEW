#include <stdio.h>
#include <stdlib.h>

int bind_const()
{
    FILE *f, *const_bind;
    char str[200];
    f = fopen("../consts.txt","r");
    const_bind = fopen("../constbind.txt","w");

    while(!feof(f))
    {
        fscanf(f,"%s",str);
        printf("%s %d\n",str,(int)str);
     //   fscanf(f,"%s",str);
     //   lua_pushnumber(L, tointeger(str));
     //   lua_setglobal(L, str);
    }

    return 0;
}

int main()
{
    bind_const();
    return 0;
}
