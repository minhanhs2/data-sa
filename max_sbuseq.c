#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    long long* a = (long long*)malloc(n * sizeof(long long));

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long result = a[0];
    long long current = a[0];

    for (int i = 1; i < n; i++) {
        current = max(a[i], current + a[i]);
        result = max(result, current);
    }

    printf("%lld", result);

    free(a);
    return 0;
}
