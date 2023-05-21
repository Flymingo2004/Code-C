#include <stdio.h>
#include <math.h>

int sodep(long long n)
{
    long long so1, socuoi, sogiua;
    int check = 1;
    // so dau
    so1 = n;
    while (so1 >= 10)
    {
        so1 /= 10;
    }
    // so cuoi
    socuoi = n % 10;
    n /= 10;
    sogiua = n % 10;
    if (socuoi == 2 * so1 || so1 == 2 * socuoi)
    {
        while (n > 0)
        {
            if (n % 10 != sogiua)
            {
                check = 0;
                break;
            }
            n /= 10;
            sogiua = n % 10;
        }
        if (check == 1)
        {
            return 1; // true
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (sodep(n))
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}