#include <stdio.h>
int main()
{
    int i, j, n, flag;
    printf("Enter positive no.(n) to find numbers which are prime from 1 to n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        flag = 1;
        if (i <= 1)
        {
            flag = 0;
        }
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
}