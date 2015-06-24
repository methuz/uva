#include <stdio.h>
#include <math.h>

int max_cycle(int n);
int main() {
    int l, u, i, j;
    int r[1000001] = {0};
    for (j = 1; j <= 1000000 ; j++) {
        r[j] = max_cycle(j);
    }
    while (scanf("%d %d", &l, &u) != EOF) {
        int max = 0;
        for (i = l; i <= u ; i++) {
            if (r[i] > max)
                max = r[i];
        }

        printf("%d %d %d\n", l, u, max);
    }
    
}

int max_cycle(int n) {
    int count = 1;
    while (n > 1) {
        count += 1;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }

    return count;
}
