#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {

		int n;
		scanf("%d", &n);
		int so_chan = 0, so_le = 0;
		while(n > 0) {
			if( n % 2 == 1) {
				so_le++;
			} else if( n % 2 == 0) {
				so_chan++;
			}
			n = n / 10;
		}
		printf("%d %d\n", so_le, so_chan);
	}
}