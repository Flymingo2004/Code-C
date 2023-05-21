#include<stdio.h>
#include<math.h>
int main() {
	unsigned int t,n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int x = sqrt(n);
		if( x*x == n) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}