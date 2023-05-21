#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a,  &b);
	for(int i = 1; i <= a; i++){
		int tmp = i;
		if(tmp >= b) tmp = b;
		for(int j = tmp; j <= b; j++){
			printf("%c", 'A' + j - 1);
		}
		for(int j = tmp - 1; j >= 1; j--){
			printf("%c", 'A' + j - 1);
		}
		printf("\n\n");
	}
}