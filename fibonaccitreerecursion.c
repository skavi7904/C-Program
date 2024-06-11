#include <stdio.h>
int fibo(int i){
    if (i<=1){
        return i;
    }
    return fibo(i-1) + fibo(i-2);     //finding nth element in fibonacci series;

}
int main(){
    int a = 5;
    printf("%d",fibo(a));
}