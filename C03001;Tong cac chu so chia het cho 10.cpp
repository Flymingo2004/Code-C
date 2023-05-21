#include<stdio.h>
#include<math.h>
int main(){
	int t; 
	scanf("%d", &t);
	while(t--)
	{
	int n, sotach;
	int tong = 0;
	scanf("%d", &n);
	while( n > 0 ){
		sotach = n % 10;
		tong = tong + sotach;
		n = n / 10;
	}
	if( tong % 10 == 0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
}