#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char c;
    if (a <= b)
    {
        c = b + 96;
    }
    else
    {
        c = a + 96;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i && j < b; j++)
        {
            printf("%c", c - j);
        }
        for (int j = i + 1; j < b; j++)
        {
            printf("%c", c - i);
        }
        printf("\n");
    }
    return 0;
}
