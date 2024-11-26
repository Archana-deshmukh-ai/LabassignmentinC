#include <stdio.h>

int main()
{
    int a[10],i,c;
   
   printf("enter elements of first array \n");
   
   for(i=0;i<10;i++)
   {
   printf("enter number = \n");
   scanf("%d",&a[i]);printf("arr[%d]=%d \n",i, a[i]);
   }
   
   
   printf("the new array is : \n");
   
   for(i=0;i<5;i++)
   {
   
    c=a[i];
    a[i]=a[9-i];
    a[9-i]=c;
   }
    
    printf(" first array[10]={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d} ",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    
     return 0;
 }