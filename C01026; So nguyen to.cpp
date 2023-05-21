#include<stdio.h>
#include<math.h>

int snt(int n) {
	if(n<2) return 0;
	if(n%2==0 && n!=2) return 0;
	for(int i=3; i<=sqrt(n); i+=2) {
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		if(snt(n)) printf("YES\n");
		else printf("NO\n");
	}
}