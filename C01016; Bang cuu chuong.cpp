#include<stdio.h>
#include<math.h>
int main(){
	 unsigned int n; 
	scanf("%u", &n);
	if(n<=9){
		for( int i = 1; i <= 10; i++){
			printf("%d ", i * n );
		}
	}
}