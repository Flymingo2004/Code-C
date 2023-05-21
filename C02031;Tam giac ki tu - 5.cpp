#include<stdio.h>
int main(){
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		char tmp = 'A' + n - i;
		if(i == n){
			printf("@");
		}else{
			for(int j = 1; j <= n - i + 1; j++){
			printf("%c", tmp + j - 2);
		}
		}
		printf("\n\n");
	}
}