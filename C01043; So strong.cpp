#include <stdio.h>
int gt(int n)
{
    int i, x1 = 1;
    for(i=1; i<=n; i++)
    {
       x1= x1 * i;
    }
    return x1;
}

int strong(int n)
{
    int sum = 0, x2;
	int temp = n;

    while(temp)
    {
        x2 = temp % 10;
        sum = sum + gt(x2);
        temp =temp /10;
    }
//check
    if(sum == n)
    {
        return 1; //true
    }
    else
    {
        return 0; //flase
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    if(strong(n))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
