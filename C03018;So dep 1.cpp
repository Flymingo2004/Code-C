#include<stdio.h>
#include<math.h>

int snt(int n) {
	if( n <= 1) return 0;
	
	for( int i = 2; i<= sqrt( n); i++) {
		if ( n % i == 0 )
			return 0;
	}
	return 1;

}

int tong_chu_sofbn( int n) {
	int sum = 0;
	while (n > 0 ) {
		sum = sum + n % 10;
		n = n /10;
	}
	if ( sum == 1 || sum == 2 || sum == 3 || sum == 5 || sum == 8 || sum == 13 || sum == 21 || sum == 34|| sum == 55) return 1;
	else return 0;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if( a > b ) {
		int temp = a;
		a = b;
		b = temp;
	}
	for( int i = a; i<= b; i++) {
		if(snt(i)) {
			if(tong_chu_sofbn(i)) {
				printf("%d ", i);
			}
		}
	}
	return 0;
}