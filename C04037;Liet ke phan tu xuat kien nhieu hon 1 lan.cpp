#include<stdio.h>
#include<math.h>
int cnt[10000000];
int main(){
    int n;
    int max_value = -1e9;
    scanf("%d", &n);
    int a[n];
    for( int i = 0; i< n; i++){
        scanf("%d", &a[i]);
        if(a[i] > max_value) max_value = a[i];
    }

for ( int i = 0; i< n ; i++){
    cnt[a[i]]++;
}
int dem = 0;
for ( int i = 0; i<=max_value; i++){
    if(cnt[i] >= 2){
    ++dem;
    }
}
printf("%d\n", dem);
for( int i = 0; i< n;i++){
    if( cnt[a[i]] >= 2){
        printf("%d ", a[i]);
        cnt[a[i]] = 0;
        }
    }
}
