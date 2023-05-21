#include<stdio.h>
int main() {
	int n;
	int x1=0,x2=1,x;
	scanf("%d",&n);
	int i = 0;
	while(i<n){
	printf("%d ",x1);
		x=x1+x2;
		x1=x2;
		x2=x;
		i++;
	}
}