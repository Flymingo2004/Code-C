#include <stdio.h>
#include <string.h>

void catdoi(char s[])
{
    int check = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '1')
            check = 1;
        else if ((s[i] == '0' || s[i] == '8' || s[i] == '9') == 0)
        {
            check = 0;
            break;
        }
    }
    if (check == 0)
    {
        printf("INVALID\n");
        return;
    }
    check = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '1')
        {
            printf("1");
            check = 1;
        }
        else if (check != 0)
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c[30];
        scanf("%s", c);
        catdoi(c);
    }
}