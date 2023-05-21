#include<stdio.h>
#include<math.h>

void nhapmang(int a[], int n) {

	for(int i = 0; i<n; i++) {
		scanf("%d",&a[i]);
	}
}

void bsort( int a[], int n) {
	int temp;
	for(int i = 0; i <n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i]>a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void xuatmang(int a[], int n) {
	printf("%d ", a[0]);
	for(int i = 1; i<n; i++) {
		if( a[i] > a [0]) {
			printf("%d", a[i]);
			break;
		}
	}
}


int main() {
	int a[100];
	int n;
	scanf("%d", &n);
	nhapmang(a, n);
	bsort(a, n);
	xuatmang(a, n);
	return 0;
}
