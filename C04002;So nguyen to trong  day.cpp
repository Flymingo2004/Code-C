#include<stdio.h>
#include<math.h>
int prime(int n) {
	if( n< 2 ) return 0;
	for( int i = 2; i <= sqrt(n); i++) {
		if( n % i == 0) return 0;
	}
	return 1;

}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[103];
		int b[105];
		int cnt = 0 ;
		for(int i = 0; i<n; i++) {
			scanf("%d", &a[i]); // nhap mang 
			if(prime(a[i]))
				b[cnt++] = a[i]; //check snt trong mang 
		}
		for(int i = 0; i<cnt; i++) {
			printf("%d ", b[i]); // in snt
		}
		printf("\n");
	}
	return 0;
}