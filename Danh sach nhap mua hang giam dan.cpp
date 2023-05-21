#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct hang
{
    long long mahang;
    char tenhang[30];
    float giamua;
    float giaban;
} s[105];
int n;
void nhap()
{
    float buy, sell;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &s[i].mahang);
        fflush(stdin);
        gets(s[i].tenhang);
        scanf("%f", &buy);
        s[i].giamua = buy;
        scanf("%f", &sell);
        s[i].giaban = sell;
    }
}
void sort()
{
    hang tmp;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((s[i].giaban - s[i].giamua) < (s[j].giaban - s[i].giaban))
            {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

void in()
{
    for (int i = 1; i <= n; i++)
    {
        printf("%lld   %s\n", s[i].mahang, s[i].tenhang);
    }
}
int main()
{
    nhap();
    sort();
    in();
}