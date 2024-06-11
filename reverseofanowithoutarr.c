#include <stdio.h>
int main(){
    int n,dig,ans=0; //init ans = 
    scanf("%d",&n);
    while(n){
      dig = n%10;
      ans = ans*10+dig;
      n=n/10;  
        
    }
    printf("%d",ans);
}