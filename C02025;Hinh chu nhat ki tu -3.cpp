#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			if(i == 1){
				if(j == 1) printf("@");
				else printf("%c", 'A' + j - 2);
			}else{
				if(j <= b - i) printf("%c", 'A' + j + i - 3);
				else printf("%c", 'A' + b - 2);
			}
		}
		printf("\n\n");
	}
}