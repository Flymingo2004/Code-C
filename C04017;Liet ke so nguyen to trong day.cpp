#include<stdio.h>
#include<math.h>

int prime( int n) {
	if(n<2)
		return 0;
	for (int i = 2; i<= sqrt(n); i++) {
		if( n %i ==0 )
			return 0;
	}
	return 1;
}

int main() {


	int n, cnt = 0, a[100];
	scanf("%d", &n);
	for( int i = 0; i< n; i++) {
		scanf("%d", &a[i]);
		if(prime(a[i]) != 0)
			cnt++;
		else a[i] =0;
	}
	printf("%d", cnt);
	for ( int i = 0; i< n; i++) {
		if (a[i] != 0) {
			printf(" %d", a[i]);
		}
	}

	return 0;

}