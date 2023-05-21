#include<stdio.h>
#include<math.h>
int prime(int n){
 	if( n < 2) return 0;
 	for(int i=2; i <= sqrt(n); i++){
 		if( n % i == 0) return 0;
	 }
	 return 1;
}

int cnt[100005];// 0 -> 10e5


int main(){
	int t;
	scanf("%d", &t);
	for( int k = 1; k<=t; k++){
		int n; scanf("%d", &n);
		int x, max = -1;
		for ( int i = 0; i<n; i++){
			scanf("%d", &x);
			if( prime(x)== 1) cnt[x]++;
			if( x > max) max = x;
		}
		printf("Test %d:\n", k);
		for( int i = 0 ; i<= max; i++){
			if ( cnt [i] != 0){
				printf("%d xuat hien %d lan\n", i, cnt[i]);
			}
		}
		for( int i = 0; i < 1e5 + 1; i++){
			cnt[i] =0;
		}
			
	}
}