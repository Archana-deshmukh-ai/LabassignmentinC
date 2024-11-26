#include<stdio.h>
int main() {
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  // swapping

  // a = (initial_a - initial_b)
  a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
  b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
  a = b - a;

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %d\n", a);
  printf("After swapping, b = %d", b);

  return 0;
}
