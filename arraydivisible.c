#include <stdio.h>
int main(){
    int n,i,sum=0,count=0;
    float avg;
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        if(arr1[i]%2==0 && arr1[i]%3==0){
            sum+=arr1[i];
            count++;
        }
    }
    avg=sum/count;
    printf("%f is the average of the array no.s which are divisible by both 2 and 3",avg);
}
