#include <stdio.h>
int main()
{
     
  int a, b, c;

  printf("Enter three different numbers: ");
  scanf("%d%d%d", &a, &b, &c);

  // if a is greater than both b and c, a is the largest
  if ((a >= b)&&( a >= c)) 
    printf("%d is the largest number.", a);

  // if b is greater than both a and c, b is the largest
  if ((b >= a) && (b >= c)) 
    printf("%d is the largest number.", b);

  // if c is greater than both a and b , c is the largest
  if ((c >= a) && (c >= b)) 
    printf("%d is the largest number.", c);

  return 0;
}