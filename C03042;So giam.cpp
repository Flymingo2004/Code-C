#include <stdio.h>
#include <math.h>
int check (int n) {
	while (n>10) {
		if (n%10>=(n/10%10)) return 0;
		n/=10;
	}
	return 1;
}
int main() {
	int t;
	scanf ("%d",&t);
	while (t--) {
		long long n, m;
		int cnt =0;
		scanf ("%ld %ld",&n,&m);
		if (n<10) 
			n=10;
		for (int i=n; i<=m; i++) {
			if (check(i)==1) cnt++;
		}
		if (cnt>0) 
		printf("%d\n",cnt);
	}
}