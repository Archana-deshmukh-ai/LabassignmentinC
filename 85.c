#include<stdio.h>
//to check whether alphabet is vowel or not 
void alph(char x)
{
  int a=0;
   //defining an array of vowels 
   char arr[]={'a','e','i','o','u','A','E','I','O','U','\0'};
   for(int i=0;i<11;i++)
    {
    //if any element of array  match  with given alphabet then , a is increased 
    if(x==arr[i])
    a++;
    }
   if(a!=0)//a has increment ,i.e., it is vowel , so a!=0
   printf("%c is vowel ",x);
   else
   printf("%c is Consonant ",x);
}
int main ()
{
  int x,y;
  printf ("enter any alphabet : ");
  scanf("%c",&x);
  alph(x);
    return 0;
}