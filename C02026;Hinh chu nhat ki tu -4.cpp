#include<stdio.h>
int main(){
	int a, b;
	int min = a;
	scanf("%d%d", &a, &b);
	if(min > b) min = b;
	for(int i = a; i >= 1; i--){
		for(int j = 1; j <= b; j++){
			if(i >= min || j >= b - i + 1) printf("%c", 'A' + min - 1);
			else{
				printf("%c",  'A' + i + j - 2);
			}
		}
		printf("\n\n");
	}
}