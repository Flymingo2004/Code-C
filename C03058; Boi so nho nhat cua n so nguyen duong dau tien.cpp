#include<stdio.h>
#include<math.h>  

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

void solve() {
    long long n;
    scanf("%lld", &n);
    long long res = 1;
    for ( long long i = 2; i <= n; i++) {
        res = lcm(res, i);
    }
    printf("%lld\n", res);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}