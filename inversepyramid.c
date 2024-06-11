#include <stdio.h>
int main()
{
    int row = 7, column = 7, i, j;
    for (i = 0; i < row; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= column - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

