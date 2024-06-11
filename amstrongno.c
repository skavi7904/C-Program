#include <stdio.h>
#include <math.h> //for power func
int main()
{
    int n, temp, count = 0, ld, ans = 0; // temp to store n for computng sum for amstrong
    scanf("%d", &n);
    temp = n;
    while (n)
    {
        n = n / 10;
        count++;
    }
    n = temp; // keeping temp till the last to compare with the ans for amstrong condition
    while (n)
    {
        ld = n % 10;
        ans = ans + pow(ld, count);
        n = n / 10;
    }
    printf("%d is the sum\n", ans);
    if (ans == temp)
        printf("%d is an amstrong no.", temp);
    else
        printf("%d is not an amstrong no.", temp);
}
