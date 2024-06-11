#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the no.of elements of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int fh = arr[0];
    int sh = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > fh)
        {
            sh = fh;
            fh = arr[i];
        }
        else if (arr[i] > sh && arr[i] != fh)
        {
            sh = arr[i];
        }
    }
    printf("%d is the second highest element in the given arr.\n", sh);
}
