#include <stdio.h>
void sub(int,int);
void sub(int c,int d){
    printf("%d",c-d);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    sub(a,b);
}
