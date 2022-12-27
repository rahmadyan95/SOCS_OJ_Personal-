#include <stdio.h>

int main() {
    int n, x, a[10001], i, j, min, temp, swaps;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    swaps = 0;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        if (i != min) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            swaps++;
        }
    }

    printf("%d\n", swaps);

    return 0;
}
