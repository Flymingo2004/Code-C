
#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	for(int i = 2; i <= 2 * a; i += 2){
		for(int j = i; j <= 2 * a; j += 2){
			printf("%c", 'A' + j - 2);
		}
		printf("\n\n");
	}
}