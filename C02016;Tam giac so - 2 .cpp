#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        k = 1;
        for (j = 1; j <= i; j++) {
            printf("%d", k);
            k += 2;
        }
        k -= 2;
        for (j = 1; j <= i - 1; j++) {
            k -= 2;
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}