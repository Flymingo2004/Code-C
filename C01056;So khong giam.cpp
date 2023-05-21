#include <stdio.h>

int main() {
	long long n;
	int so_truoc, so_sau;
	int t;
	scanf("%d", &t);
	while(t--) {
		so_truoc = 10;
		scanf("%lld", &n);
		while(n>0) {
		 so_sau = n % 10;
			if( so_truoc < so_sau){
				printf("NO\n");
				break;
			}
			so_truoc = n%10;
			n = n / 10;
		}
		if (n == 0) printf("YES\n");
	}
	return 0;
}
