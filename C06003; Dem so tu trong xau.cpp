#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char a[203];
        fgets(a, sizeof(a), stdin);
        int cnt = 1;
        for (int i = 1; i < strlen(a); i++)
        {
            if (a[i] == ' ' && a[i - 1] != ' ')
            {
                cnt++;
            }
        }
        int idx = strlen(a);
        if(a[idx - 2] ==' ') {
        cnt -= 1;
        }
        printf("%d\n", cnt);
    }
}