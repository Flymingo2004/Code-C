#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
		int a[n];
	for( int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for( int i = 0 ; i<n; i++ ){
		int check = 1;
		for (int j = 0; j < i; j++){
			if(a[j] == a[i]){
				check = 0;
				break;
			}
		}
		if( check){
			printf("%d ", a[i]);
		}
	}
}