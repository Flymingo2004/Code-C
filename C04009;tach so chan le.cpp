#include<stdio.h>
#include<math.h>
int main(){
	int n, X[100];
	int sochan[100], sole[100];
	int cnt_sochan = 0;
	int cnt_sole = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d",&X[i]); // nhap mang
		if(X[i] % 2 ==0 ){
			sochan[cnt_sochan] = X[i]; //mang chan +1
			cnt_sochan++;
		}
		else{
			sole[cnt_sole] = X[i];
			cnt_sole++;
		}
	}
	//in mang 
	for( int i = 0; i < cnt_sochan; i++){
		printf("%d ", sochan[i]);
	}
	printf("\n");
	for(int i = 0; i < cnt_sole; i++){
		printf("%d ", sole[i]);
	}
	return 0;
	
}