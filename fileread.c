#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("dash.txt", "r");
    char c;
    c = fgetc(fp);
    printf("%c", c);
    fclose(fp);
}

/*
char c[100];
fgets(c,60,fp);
printf("%s",c);
*/