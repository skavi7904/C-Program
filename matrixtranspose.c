#include <stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter the size of the 2darray: ");
    scanf("%d%d",&a,&b);
    int arr2d[a][b],arr2dx[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter element for position %d%d :",i,j);
            scanf("%d",&arr2d[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            arr2dx[i][j]=arr2d[j][i];
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",arr2dx[i][j]);
        }
        printf("\n");
    }
}