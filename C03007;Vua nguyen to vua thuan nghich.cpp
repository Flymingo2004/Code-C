#include<stdio.h>
#include<math.h>

int prime(int n) {
	if(n<2) return 0;
	for(int i = 2; i<= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int thuannghich(int n) {
	int x = n;
	int res = 0;
	while( n> 0) {
		res = res * 10 + n % 10;
		n = n /10;
	}
	if( res == x)
		return 1;
	return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for ( int i = a; i<= b; i++) {
			if( prime(i) && thuannghich(i)) {
				cnt++;
				printf("%d ", i);
				if(cnt % 10 == 0 )
					printf("\n");
			}
		}
		printf("\n");
	}
}