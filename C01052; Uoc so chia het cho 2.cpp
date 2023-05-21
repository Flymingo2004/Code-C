#include <stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d",&n);
		int i=1;
		int cnt = 0;
		while (i<=n/i) {
			if(n%i==0) {
				if (i%2==0) cnt++;
				if (n/i%2==0) cnt++;
				if (n/i==i && i%2==0) cnt--;
			}
			i++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}