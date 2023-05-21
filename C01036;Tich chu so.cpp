#include<stdio.h>
#include<math.h>
int main(){
	int n, sotach;
	int tich=1;
	scanf("%d", &n);
	while(n>0){
		sotach= n % 10;
		n = n /10;
		tich = tich * sotach;
	}
	printf("%d", tich);
}