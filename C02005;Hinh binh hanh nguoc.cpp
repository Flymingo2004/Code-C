#include<stdio.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i<=n ; ++i){
		for( int j = 2; j<= i; ++j){
			printf("~");
		}
		for(int k = 1; k<= m; ++k){
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}