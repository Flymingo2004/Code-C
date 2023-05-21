#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = 1; i <= a; i++){
        int tmp = i;
        int cnt = 0;
        while(cnt < b){
            while(tmp >= 1 && cnt < b){
                printf("%d", tmp);
                cnt++;
                tmp--;
                if(cnt == b) break;
            }
            tmp = tmp + 2;
            while(tmp <= b && cnt < b){
                printf("%d", tmp);
                cnt++;
                tmp++;
                if(cnt == b) break;
            }
            tmp = tmp - 2;
        }
        printf("\n\n");
    }
}
