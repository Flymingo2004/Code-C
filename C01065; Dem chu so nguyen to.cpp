#include <stdio.h>
#include <string.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    int a[12] = {0};
    while (n > 0)
    {
        int x = n % 10;
        n /= 10;
        if (x == 2 || x == 5 || x == 7 || x == 3)
        {
            a[x]++;
        }
    }
    for (int i = 2; i < 10; i++)
    {
        if (a[i] > 0)
            printf("%d %d\n", i, a[i]);
    }
    return 0;
}