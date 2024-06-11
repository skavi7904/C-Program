#include <stdio.h>
int main(){
    int i,flag=0;
    char c, arr1[100];
    scanf("%[^\n]s",&arr1);
    scanf(" %c",&c);
    for(i=0;i!='\0';i++){
        if(arr1[i]==c){
            flag=1;
            printf("found");
            break;
        }
        
    }
    if(flag==0){
        printf("not found");
    }
}