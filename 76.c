#include<stdio.h>
//to check even or odd number
void fun(int n){
 if(n%2==0)
 printf("%d is even number",n);
 else
 printf("%d is odd number",n);
}
int main ()
{
  int num;
  printf ("enter number:");
  scanf("%d",&num);
  fun(num);
    return 0;
}