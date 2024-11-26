#include<stdio.h>
//to check given number is palindrome or not
void palindrome(int n){
 int sum=0;
 int original=n;//storing n
 for(int i=0;n!=0;i++)
 {
  int r=n%10;//finding remainder 
  sum=sum*10+r;//finding reverse of given number
  n=n/10;
  }
 if(original==sum)//if original =reverse ,it is palindrome number 
 printf("%d is palindrome number",original);
 else
 printf("%d is not a palindrome number",original);
}
int main ()
{
  int num;
  printf ("enter number:");
  scanf("%d",&num);
  palindrome(num);
    return 0;
}