#include <stdio.h>

int main()
{
    int i,n,arr1[10],arr2[10],arr[10];
   
   printf("enter elements of first aaray \n");
   
   for(i=0;i<10;i++)
   {
   printf("enter number = \n");
   scanf("%d",&arr1[i]);printf("arr[%d]=%d \n",i, arr1[i]+arr2[i]);
   }
   
   printf("enter elements of second aaray \n");
   
   for(i=0;i<10;i++)
   
   {
     printf("enter number : \n");
     scanf("%d",&arr2[i] );
   }
   
   printf("the new array is : \n");
   
   for(i=0;i<10;i++)
   {
   
    arr[i] = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = arr[i];
   
   }
    
    printf(" first array[10]={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d} ",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4],arr1[5],arr1[6],arr1[7],arr1[8],arr1[9]);
    printf(" second array[10]={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d} "
         ,arr2[0],arr2[1],arr2[2],arr2[3],arr2[4],arr2[5],arr[6],arr[7],arr[8],arr[9]);
     
     return 0;
 }