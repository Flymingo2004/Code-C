#include<stdio.h>
#include<math.h>
int main () {
	int t;
	int cnt_chan=0,cnt_le=0;
	scanf("%d",&t);
	while(t--) {
		cnt_chan=0;
		cnt_le=0;
		long long n;
		scanf("%lld",&n);
		while(n>0) {
			if((n%10)%2==0) {
				cnt_chan++;
			} else {
				cnt_le++;
			}
		n = n /10;
		}
		if(cnt_chan<cnt_le) printf("YES\n");
		else printf("NO\n");
	}
}