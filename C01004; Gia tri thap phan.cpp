#include<stdio.h>
#include<math.h>
int main() {
	int t, n;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		if (n > 0) {
			printf("%.15f\n",(double) 1/n);
		}
	}
	return 0;
}