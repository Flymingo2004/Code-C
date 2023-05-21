#include<stdio.h>
#include<math.h>
int snt(int n){
	if (n <= 1){
		return 0;
	}
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i ==0){
				return 0;
			}
		}
		return 1;
}
int main(){
	int n; 
	scanf("%d", &n);
	int cnt = 0;
	int i = 2;
	while( cnt < n){
		if(snt(i))
		{
			printf("%d\n", i);
			cnt++;
		}
		i++;
	}
}
