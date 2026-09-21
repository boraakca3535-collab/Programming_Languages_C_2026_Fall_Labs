#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  // TODO: compute factorial iteratively
  long long res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }

  return res;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);
  while (n < 0) {
    printf("Too low.\n Enter new integer that is at least 0: ");
    scanf("%d", &n);
  }

  printf("Factorial result: %lld\n", factorial(n));

  // TODO: validate input, call function, print result

  return 0;
}
