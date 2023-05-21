#include<stdio.h>
#include<math.h>
int snt(int n){
	if( n <= 1){
		return 0;
	}
	for( int i = 2; i <= sqrt(n); i++){
		if( n %i ==0){
		return 0;
		}
	}
	return 1;
}

void so_sanh_n(int n){
	for( int i = 2 ; i < n; i++){
		if(snt(i)){
			printf("%d\n", i);
		}
	}
}

int main(){
	int n; 
	scanf("%d", &n);
	so_sanh_n(n);
	return 0;
}
