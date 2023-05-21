#include <stdio.h>
#include <math.h>
int snt(int n) {
    if (n < 2) 
	return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        int sum = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                sum = sum + j;
                if (j != i/j) sum = sum + i/j;  // ko trung 
            }
        }
        if (sum == i) printf("%d ", i);
    }
  return 0;
}
