#include <stdio.h>
#include <string.h>


void answer()
{
    int n = 0;
    char s[55];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    char res[60][60];
    char *tok = strtok(s, " ");
    while (tok)
    {
        strcpy(res[n++], tok);
        tok = strtok(NULL, " ");
    }
    for (int i = 1; i < n; i++)
    {
        res[i][0] -= 32;
        if (i == n - 1)
            printf("%s, ", res[i]);
        else
            printf("%s ", res[i]);
    }
    for (int i = 0; i < strlen(res[0]); i++) // in ra mang 
        res[0][i] -= 32;
    printf("%s\n", res[0]);
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        answer();
    return 0;
}