#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x ,y; 
		scanf("%d", &n);
		 x = n % 10;
		while(n>=9){
			n = n / 10;
			y = n;
		}
		if( x == y) printf("YES\n");
		else printf("NO\n");
	}
}