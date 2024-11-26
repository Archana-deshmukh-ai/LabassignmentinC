#include <stdio.h>
int main()
{
  int y, x, n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Enter the value of x: ");
  scanf("%d",&x);
   if(n==1){
    printf("y=1+x\n");
    y=1+x;
    printf("%d\n",y);
    }
   else if(n==2){
    printf("y=1+x/n\n");
    y=1+x/n;
    printf("%d\n",y);
    }
   else if(n==3){
    printf("y=1+x^n\n");
    y=1+x^n;
    printf("%d\n",y);
    }
   else{
    printf("y=1+nx\n");
     y=1+n*x;
     printf("%d\n",y);
  }




return 0;








}