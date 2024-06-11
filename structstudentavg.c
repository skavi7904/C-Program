#include <stdio.h>
struct student{
    int s1;
    int s2;
    int s3;
    float avg;
}st1,st2,st3;
int main(){
    scanf("%d%d%d",&st1.s1,&st1.s2,&st1.s3);
    st1.avg = (st1.s1+st1.s2+st1.s3)/3; 
    printf("%.2f\n",st1.avg);
    scanf("%d%d%d",&st2.s1,&st2.s2,&st2.s3); 
    st2.avg = (st2.s1+st2.s2+st2.s3)/3; 
    printf("%.2f\n",st2.avg);
    scanf("%d%d%d",&st3.s1,&st3.s2,&st3.s3);  
    st3.avg = (st3.s1+st3.s2+st3.s3)/3;
    printf("%.2f\n",st3.avg);
}