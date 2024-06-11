#include <stdio.h>
int main(){
    void func1(int i){
        if(i>0){
            func1(i-1);
            printf("%d\n",i);
            
        }
        
    }
    func1(4);
}