#include <stdio.h>
#include <ctype.h>
union dash{
    int a;
    float b;
    char c;
}dash1;
int main(){
    scanf("%d",&dash1.a);
    printf("%d\n",dash1.a);
    scanf("%f",&dash1.b);
    printf("%f\n",dash1.b);
    do{
        dash1.c=getchar();
    }while(isspace(dash1.c));
    
    
    printf("%c",dash1.c); //****with space to avoid reading space a character;****
}