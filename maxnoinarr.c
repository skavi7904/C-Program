#include <stdio.h>
int main()
{
    int i, n, max;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d is the maximum element in array", max);
}