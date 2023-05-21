#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if( a != 0){
		float x = ((float)-b / a);
		printf("%.2f", x);
	}
	else if( a = 0 || b != 0 ) {
		printf("Vo nghiem");
	}
	else {
		printf("Vo so nghiem");
	}
}