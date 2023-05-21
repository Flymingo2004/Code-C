#include<stdio.h>
#include<math.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a = sqrt(n);
	int b = sqrt(m);
	if(a * a < n) {
		printf("%d\n",b-a);
		for(int i=a+1; i<=b; ++i) {
			printf("%d\n", i*i);
		}
	} else {
		printf("%d\n",b-a+1);
		for(int i=a; i<=b; ++i) {
			printf("%d\n", i*i);
		}
	}
	return 0;
}