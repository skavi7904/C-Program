#include <stdio.h>
int main(){
    int a,b,i,j,x;
    printf("Enter the size of the 2darray: ");
    scanf("%d%d",&a,&b);
    int arr2d[a][b],arr2dx[a][b];
    printf("first array\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter element for position %d%d :",i,j);
            scanf("%d",&arr2d[i][j]);
        }
    }
    printf("second array\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("enter element for position %d%d :",i,j);
            scanf("%d",&arr2dx[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            x=arr2dx[i][j]+arr2d[i][j];
            printf("%2d ",x);
        }
        printf("\n");
    }
}
