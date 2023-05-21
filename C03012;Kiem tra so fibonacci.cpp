#include <stdio.h>
#include<math.h>
int main() {
	long long n, a = 0, b = 1, c;
	scanf("%lld", &n);
	while (b < n) {
		c = a + b;
		a = b;
		b = c;
	}
	if (b == n) {
		printf("1\n");
	} else {
		printf("0\n");
	}

	return 0;
}
