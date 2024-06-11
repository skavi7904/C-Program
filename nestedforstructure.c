#include <stdio.h>
int main(){
    int n,x,y;
    printf("enter no. of lines or no.s: ");
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        for(y=1;y<=x;y++){
            printf("%d ",y);
        }
        printf("\n");
    }
}