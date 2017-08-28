/* Multiples of 3 and 5
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <stdio.h>

main() {
  int n3, n5, acc;
  acc = 0;
  for (n3 = 0; n3 < 1000; n3 = n3 + 3) {
    if (n3 % 5 != 0)
      acc = acc + n3;
  }
  for (n5 = 0; n5 < 1000; n5 = n5 + 5) {
    acc = acc + n5;
  }
  printf("%d\n",acc);
    }
