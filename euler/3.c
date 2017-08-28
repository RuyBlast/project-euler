/* Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>

#define MAX 1000000
#define NUMBER 600851475143

main() {
  int i, c;
  c = 1;
  for (i = 1; i <= MAX; i = i + 1) {
    if (NUMBER % i == 0)
      c = i;
  }
  printf("%d\n", c);
}

/* prime -> eratosthene ; le plus grand facteur non premier est 486847 */
