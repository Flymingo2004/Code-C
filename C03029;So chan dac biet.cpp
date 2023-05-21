#include <stdio.h>

int check(long long n) {
	while(n>0) {
		long long sdb=n%10;
		if(sdb%2!=0)
		return 0;
		n = n / 10;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		if(check(n) == 1)printf("YES\n");
		else printf("NO\n");
	}
}