#include <stdio.h>
int fact(int n)
{
   if(n==1 || n==0)
   return 1;
   
   else 
   return n*fact(n-1);
  }
int Comb(int n,int r)
  { 
    int nCr;
    if(n>=r)
    nCr=fact(n)/(fact(r) * fact(n-r));
    printf("%d",nCr);
    }
int main() 
{   
    int n,r,c;
    printf("enter n,r ");
    scanf("%d%d",&n,&r);
    Comb(n,r);
    
 } 