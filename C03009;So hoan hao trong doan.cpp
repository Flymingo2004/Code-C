#include<stdio.h>
#include<math.h>
int sohoanhao(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    if( n == sum ){
    	return 1;
	}
	else{ return 0;
	}
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a<b){
    for (int i = a; i <= b; i++) {
        if (sohoanhao(i)) {
            printf("%d ", i);
        }
    }
}
else if ( a > b){
	for( int i = b; i <= a; i++){
		if(sohoanhao(i)){
			printf("%d", i);
		}
	}
}
    return 0;
}
