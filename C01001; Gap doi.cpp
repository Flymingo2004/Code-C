#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if( n < 10000000){
		int x = n * 2;
		printf("%d", x);
	}
	else{ 
	printf(" unknow");
	}
	
}