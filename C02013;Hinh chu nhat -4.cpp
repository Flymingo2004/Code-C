#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int max = a;
    int min;
    if(b > max){
        max = b;
        min = a;
    }
    for(int i = max; i >= max - a + 1; i--){
        int tmp = i;
        int cnt = 0;
        while(cnt < b){
            while(tmp >= 1 && cnt < b){
                printf("%d", tmp);
                cnt++;
                tmp--;
                if(cnt == b) 
				break;
            }
            tmp = tmp + 2;
            while(tmp <= max && cnt < b){
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
