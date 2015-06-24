#include <stdio.h>
#include <math.h>

int max_cycle(int n);
int main() {
    int l, u, i;
    int r[1000001] = {0};
    for (i = 1; i <= 1000000 ; i++) {
        r[i] = max_cycle(i);
    }
    while (scanf("%d %d", &l, &u)) {
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
