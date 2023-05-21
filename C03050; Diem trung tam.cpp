#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cnt[100005] = {0};
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        cnt[a]++;
        cnt[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] != 1 && cnt[i] != n - 1)
        {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}