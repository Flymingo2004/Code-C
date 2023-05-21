#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int m = n % 10;
	int p = 0;
	int x = 10;
	n = n / 10;
	while(n / 10 != 0) {
		p = p+ (n % 10) * x;
		x =x * 10;
		n = n / 10;
	}
	m = m*x + p + n;
	printf("%d", m);
	return 0;
}