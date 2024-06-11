#include <stdio.h>
int main(){
    int n, count=0;
    scanf("%d",&n);
    while(n){  //when n becomes 0, it will exit because it means false
        
        n=n/10;
        count++;
    }
    printf("%d",count);
}