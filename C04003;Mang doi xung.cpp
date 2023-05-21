#include<stdio.h>
#include<math.h>

int so_sanh( int n, int a[103], int b[103]){
	for( int i = 0; i< n;i++){
		if(a[i] != b[i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while( t--){
		int n;
		scanf("%d", &n);
		int a[103], b[103];
		for ( int i = 0, j = n - 1 ;i < n; i++, j-- ){
			scanf("%lld",& a[i]);
			b[j] = a[i];
		}
		if(so_sanh( n, a, b) == 1)
		printf("YES\n");
		else printf("NO\n");
	}
}