#include <stdio.h>
#include <string.h>

int main()
{
    char a[505];
    fgets(a, sizeof(a), stdin);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for (int i = 0; i < strlen(a) - 1; i++)
    {   
        
        if (a[i] >= '0' && a[i] <= '9')
        {
            cnt2++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            cnt1++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            cnt1++;
        }
        else
        {
            cnt3++;
        }
    }
    printf("%d %d %d", cnt1,cnt2,cnt3);
    return 0;
}