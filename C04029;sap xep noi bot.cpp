#include <stdio.h>
#include <math.h>
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min, step = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int check = 0;
        min = i;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j+1];
                a[j + 1] = a[j];
                a[j] = tmp;
                check++;
            }
        }
        if (check != 0)
            step++;
        if (check != 0)
        {
            printf("Buoc %d: ", step);
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}