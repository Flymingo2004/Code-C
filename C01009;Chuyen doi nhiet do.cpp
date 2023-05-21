#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d", &a);
	double b= ((double)a * 9/5) + 32;
	printf("%.2lf", b);
	return 0;
}