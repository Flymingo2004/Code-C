#include<stdio.h>
int main() {
	int n,a[100];
	scanf("%d", &n);
	int i,j;
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	int dem=0,k=0,b[100];
	for(i=0; i<n; i++) {
		int test=1;
		for(j=0; j<n; j++) { 
			if(a[i]==a[j]&&i!=j) {
				test=0;
				break;
			}
		}
		if(test==1) {
			b[k]=a[i];
			dem++;
			k++;
		}
	}
	printf("%d\n", dem);
	for(k=0; k<dem; k++) {
		printf("%d ", b[k]);
	}
}