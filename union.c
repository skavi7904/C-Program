#include <stdio.h>
union dash{
    int a;
    float b;
    char c;
}dash1;
int main(){
    scanf("%d",&dash1.a);
    
    scanf("%f",&dash1.b);
    
    scanf("\n%c",&dash1.c);
    printf("%c\n",dash1.c); //same problem
    printf("%d\n",dash1.a);
    printf("%f\n",dash1.b);
}