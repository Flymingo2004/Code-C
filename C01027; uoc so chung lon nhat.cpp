#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a,b;
		scanf("%d%d", &a, &b);
		if( a == 0 || b == 0 ) {
			printf("%d", a + b);
		}
		while( a != b) {
			if(a > b) {
				a = a - b; // a >b
			} else {
				b = b-a; // b < a
			}
		}
		printf("%d\n", a);
	}
		

}