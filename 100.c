#include <stdio.h>

int p(int n) {
   if (n == 1) {
       return 1;
   }

   if (n % 2 == 1) {
       n = 3 * n + 1;
   } else {
       n = n / 2;
   }

   return 1 + p(n);
}

int main() {
    int max = 0;
    int max_i = 0;
    for (int i = 1; i <= 100000; i++) {
      int current_p = p(i);
      if (current_p > max) {
          max = current_p;
          max_i = i;
      }
    }
    printf("max = %d, max_i = %d", max, max_i);
}
