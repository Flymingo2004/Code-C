#include<stdio.h>
#include<math.h>

int prime(int n) {
	if( n < 2 ) return 0;
	for ( int i = 2; i <= sqrt(n); i++) {
		if( n% i==0 ) return 0;
	}
	return 1;
}
int primecheck(int n) {
	int a = n ;
	while( a > 0) {
		int temp = a % 10;
		if( temp != 2 && temp != 3 && temp != 5 && temp != 7)
			return 0;
		a = a / 10;
	}
	if(prime(n)) return 1;
	return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while( t--) {
		int a, b;
		int cnt = 0;
		scanf("%d %d", &a, &b);
		for( int i = a; i <=b; i++) {
			if(primecheck(i))
			cnt++;
		}
		printf("%d\n", cnt);

	}
	return 0;
}