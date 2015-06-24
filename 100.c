#include <stdio.h>
#include <math.h>

unsigned int max_cycle(unsigned int n);
int main() {
    unsigned int l, u, i, j;
    unsigned int _l, _u;
    unsigned int r[1000001] = {0};
    for (j = 1; j <= 1000000 ; j++) {
        r[j] = max_cycle(j);
    }
    while (scanf("%d %d", &l, &u) != EOF) {
        _l = l;
        _u = u;
        if (l > u) {
            unsigned int v = l;
            l = u;
            u = v;
        }
        unsigned int max = 0;
        for (i = l; i <= u ; i++) {
            if (r[i] > max)
                max = r[i];
        }

        printf("%d %d %d\n", _l, _u, max);
    }
    
}

unsigned int max_cycle(unsigned int n) {
    unsigned int count = 1;
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
