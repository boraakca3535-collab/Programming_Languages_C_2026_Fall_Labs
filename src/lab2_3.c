#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  // TODO: check if n is prime using loop up to sqrt(n)
  for (int j = 2; j * j <= n; j++) {
    if (n % j == 0) {
      return 0;
    }
  }
  return 1;

  // placeholder
}
int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);
  while (n < 2) {
    printf("No prime number detected.\n Enter a higher number: ");
    scanf("%d", &n);
  }
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d\n", i);
    }
  }

  // TODO: validate input and print all primes up to n

  return 0;
}
