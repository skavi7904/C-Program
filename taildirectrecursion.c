#include <stdio.h>
int main(){
    void func1(int i){
        if(i>0){
            printf("%d\n",i);
            func1(i-1);
        }
        
    }
    func1(4);
}