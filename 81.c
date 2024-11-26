#include<stdio.h>
int fun(int n )
 {
 int a=0;
     for(int i=1;i<=n;i++)
     {
       if(n%i==0)//i becomes factor of n
        a++;//a= number of factors 
     }
      if(a==2)// prime number has only two factors 1 and itself 
      return 1;
      else 
      return 0;
 }
 int main()
 {
  int n;
   printf(" enter n \n");
   scanf("%d",&n);
  int p= fun(n);
  printf("%d",p);
   }