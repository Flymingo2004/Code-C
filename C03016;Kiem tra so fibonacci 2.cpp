#include <stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		long long n, a = 0, b = 1, c;
		scanf("%lld", &n);
		if(n== 0 || n == 1) {
			printf("YES\n");
		} else {
			while (b < n) {
				c = a + b;
				a = b;
				b = c;
			}
			if (b == n) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}

	return 0;
}
