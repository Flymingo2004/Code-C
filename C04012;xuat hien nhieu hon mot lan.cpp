#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a[n];
	int b[100005] = {0};
	for ( int i = 0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for( int i = 0; i<n ;i++ ){
		if( b[a[i]] > 1){
			printf("%lld ", a[i]);
			b[a[i]] = 0;
		}
	}
	return 0;
}
