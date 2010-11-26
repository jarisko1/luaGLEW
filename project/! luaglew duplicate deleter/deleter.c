#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int deleter()
{
    FILE *from, *to;
    char line_from[300],line_to[300];
    int pom=0;

    from = fopen("../consts_list - full with duplicates.txt","r");
    to = fopen("../consts_list - full without duplicates.txt","rw");
    while(feof(from)==0)
    {
        fgets(line_from,290,from);
        printf("%s\n",line_from);
        fseek(to,0,SEEK_SET);
        pom=0;
        while(feof(to)==0)
        {
            if(fgets(line_to,290,to)==NULL)
                break;
            if(strcmp(line_from,line_to)==0)
                pom++;
        }
        fseek(to,0,SEEK_END);
        if(pom==0)
            fputs(line_from,to);

    }
    fclose(from);
    fclose(to);
    return 0;
}

int main()
{
    if(deleter()==0)
        printf("Duplicates was deleted\n");
    return 0;
}
