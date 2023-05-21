#include<stdio.h>
#include<math.h>
void swap( int*a, int*b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[101];
    int chan[101], demc = 0;
    int le[101], demle = 0;

	for(int i = 0; i< n; i++) {
		scanf("%d", &a[i]);
		if( a[i] % 2 == 0)
			chan[demc++] = a[i];
		else
			le[demle++] = a[i];
	}
	for( int i = 0; i<demc; i++) {
		for( int j = i + 1; j < demc; j++) 
			if( chan[j] < chan[i])
				swap(&chan[i], &chan[j]);
			printf("%d ", chan[i]);

	}
	for( int i = 0; i< demle; i++) {
		for( int j = i + 1; j< demle; j++) 
			if(le[j] < le[i])
				swap( &le[i], &le[j]);
			printf("%d ", le[i]);

	}
	return 0;
}