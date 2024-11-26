#include <stdio.h>

int main() {

  int n, i, code = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  
  if (n == 0 || n == 1)
    printf("Number is not prime");

  for (i = 2; i <= n / 2; ++i) {

    
    if (n % i == 0) {
      code = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (code == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}