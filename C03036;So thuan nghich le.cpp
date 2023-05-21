#include<stdio.h>
#include<math.h>

long long stn(long long  n) {
	int a[20];
	int dem = 0, i;
	do {
		a[dem++] = ( n % 10);
		n = n / 10;
	} while( n > 0);
	//kiem tra thuan nghich
	for ( i = 0; i < ( dem / 2); i++) {
		if(a[i] != a[(dem - i -1)]) {
			return 0;
		}

	}
	return 1;
}

long long chuso( long long n) {
	int check = 1;
	while( n > 0) {
		for ( int i = 0 ; i < n ; i++) {
			i = n % 10;
			if( i % 2 == 1) check = 1;
			else {
				check = 0;
				break;
				n = n / 10;
			}
			if(check = 1) return 1;
			else return 0;
		}
	}
}

long long tongso( long long n ){
	long long sum = 0;
	while( n > 0){
		sum = sum + n % 10;
		n = n / 10;
	}
	if( sum % 2 == 1) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while( t--){
		long long n;
		scanf("%lld", &n);
		if( stn(n) == 1 && chuso(n) == 1 && tongso(n) == 1)
		printf("YES\n");
		else printf("NO\n");
	}
}
