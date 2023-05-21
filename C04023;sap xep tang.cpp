#include <stdio.h>
#include <math.h>
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void out(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void bsort(int a[], int n)
{
    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tg = a[i]; // swap
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    in(a, n);
    bsort(a, n);
    out(a, n);
}
