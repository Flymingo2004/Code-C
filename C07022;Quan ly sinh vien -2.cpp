#include<stdio.h>
#include<string.h>
#include<ctype.h>


typedef struct sinhvien
{
    int msv;
    char ten[100];
    float a, b, c, sum;
} Student;

void themSinhVien(Student sv[], int *stt)
{
    sv[*stt].msv = *stt + 1;
    scanf("\n%[^\n]s", sv[*stt].ten);
    scanf("%f %f %f", &sv[*stt].a, &sv[*stt].b, &sv[*stt].c);
     sv[*stt].sum = sv[*stt].a + sv[*stt].b + sv[*stt].c;
    *stt += 1;
}


void inketqua(Student sv[], int stt)
{
    for (int i = 0; i < stt; i++)
    {
        if (sv[i].a < sv[i].b && sv[i].b < sv[i].c)
        {
            printf("%d %s %.1f %.1f %.1f\n", sv[i].msv, sv[i].ten, sv[i].a, sv[i].b, sv[i].c);
        }
    }
    
}

void capnhat(Student sv[], int k)
{
    scanf("\n%[^\n]s", sv[k - 1].ten);
    scanf("%f %f %f", &sv[k - 1].a, &sv[k - 1].b, &sv[k - 1].c);
    sv[k - 1].sum = sv[k - 1].a + sv[k - 1].b + sv[k - 1].c;
}


int main()    
{
    int n, k, stt = 0;
    Student sv[100];
    while (1)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            scanf("%d", &k);
            for (int i = 0; i < k; i++)
            {
                themSinhVien(sv, &stt);
            }
            printf("%d\n", k);
        }
        if (n == 2)
        {
            scanf("%d", &k);
            capnhat(sv, k);
            printf("%d\n", k);
        }
        if (n == 3)
        {
            break;
        }
    }
    inketqua(sv, stt);
    return 0;
}