#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];
    char s1[100];
    fgets(s, sizeof(s), stdin);
    scanf("%s", &s1);
    char *token = strtok(s, " ");
    char a[100][200];
    int n  = 0;
    while (token != NULL)
    {
        if (strcmp(token, s1) != 0)
        {
            strcpy(a[n], token);
            n++;
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0 ; i < n; i++){
        printf("%s", a[i]);
        if(i != n - 1){
            printf(" ");
        }
    }
}