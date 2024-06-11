#include <stdio.h>
int main()
{
    int length, target, flag = 0, i;
    scanf("%d%d", &length, &target);
    int arrx[length];
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arrx[i]);
        if (arrx[i] == target)
        {
            flag = 1;
            printf("%d is found at index %d", target, i);
            break;
        }
    }
    if (flag == 0)
        printf("element is not present in the given array");
}
