#include <stdio.h>
#include <math.h>

int main() {
    int tien[]= {1000, 500, 200, 100,50,20, 10, 5, 2, 1};
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		int cnt=0;
		scanf("%d",&n);
		for(int i=0; i<10; i++) {
			while(n>=tien[i]) {
				cnt++;
				n = n - tien[i];
			}
		}
		printf("%d\n",cnt);
	}
}