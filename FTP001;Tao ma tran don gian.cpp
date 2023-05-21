#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int res = 1;
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", res);
                res+=1;
            }
        }
        printf("\n");
    }
    return 0;
}
