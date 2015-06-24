#include <stdio.h>
#include <math.h>

int max_cycle(int n);
int main() {
    int l, u;
    while (scanf("%d %d", &l, &u)) {
        int max = 0;
        int i;
        for (i = l; i <= u ; i++) {
            int max_cycle_of_i = max_cycle(i);
            if (max_cycle_of_i > max)
                max = max_cycle_of_i;
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
