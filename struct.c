#include <stdio.h>
    struct rectangle{
    int length;
    int breadth;
    int area;
    };
int main(){
    struct rectangle rect1;
    struct rectangle rect2;
    scanf("%d%d",&rect1.length,&rect1.breadth);
    rect1.area=rect1.length*rect1.breadth;
    printf("%d\n",rect1.area);
    scanf("%d%d",&rect2.length,&rect2.breadth);
    rect2.area=rect2.length*rect2.breadth;
    printf("%d",rect2.area);
}