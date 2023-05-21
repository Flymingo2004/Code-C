#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[101];
		int b[101];
		int cnt = 0;
		for(int i = 0; i<n; i++) {
			scanf("%d", &a[i]);
			if(a[i] % 2 == 0)
				b[cnt++] = a[i];
		}
		for(int i = 0; i< cnt ; i++) {
			printf("%d ", b[i]);
		}

		printf("\n");
	}
	return 0;
}