#include <stdio.h>
int ucln(long long x1, long long x2) {
	if (x1==0||x2==0) 
	return x1 +x2;
	while (x1 != x2) {
		if (x1 > x2) {
			x1 = x1 - x2;
		} else x2 = x2 - x1;
	}
	return x2;
}
int main() {

		long long a,b;
		scanf ("%lld%lld", &a, &b);
		long long bcnn = a*b/ ucln(a,b);
		printf("%lld\n%lld", ucln(a,b), bcnn);
	}