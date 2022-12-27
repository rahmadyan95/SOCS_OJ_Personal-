#include <stdio.h>

int main() {
    long long int t, n, x, a[1001], i, j, k, temp, waktu;

    scanf("%lld", &t);
    for (k = 1; k <= t; k++) {
        scanf("%lld %lld", &n, &x);

        for (i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        waktu = 0;

        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;

                    waktu += x;
                }
            }
        }

        printf("Case #%lld: %lld\n", k, waktu);
    }

    return 0;
}
