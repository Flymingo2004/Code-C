#include<stdio.h>
#include<math.h>

int tongchuso(int n){
    int sum = 0;
    while( n > 0){
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
}

int tongthuaso(int n){
    int sum = 0;
    for( int i = 2; i <=n; i++){
        while(n% i == 0){
            sum = sum + tongchuso(i);
            n = n / i;
        }
        if( n == 1) break;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int a = tongchuso(n);
    int b = tongthuaso(n);
    if ( a == b) printf("YES");
    else printf("NO");
    return 0;
}