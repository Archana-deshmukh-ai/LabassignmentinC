#include<stdio.h>
//to check given number is armstrong number or not
void armstrong(int n){
 int sum=0;
 int original=n;//storing n
 for(int i=0;n!=0;i++)
 {
  int r=n%10;//finding remainder 
  sum=sum+r*r*r;//finding sum of cubes of individual digs
  n=n/10;
  }
 if(original==sum)//if original =sum of cubes of digits ,it is armstrong number 
 printf("%d is an  armstrong number",original);
 else
 printf("%d is not an armstrong number",original);
}
int main ()
{
  int num;
  printf ("enter number:");
  scanf("%d",&num);
  armstrong(num);
    return 0;
}