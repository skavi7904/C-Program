// without using if
// #include <stdio.h>
// int main(){
//     int i, n, sum=0;
//     scanf("%d",&n);
//     for(i=2;i<=n;i+=2){
//         sum+=i;
//     }
//     printf("%d",sum);
// }

// for n-sum off nos
#include <stdio.h>
int main(){
    int i, n, sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        sum+=i;
    }
    printf("%d",sum);
}
