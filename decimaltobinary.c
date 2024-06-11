#include <stdio.h>
int main(){
    int arr1[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;n>0;i++){
        arr1[i]=n%2;
        n/=2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",arr1[i]);
    }
}