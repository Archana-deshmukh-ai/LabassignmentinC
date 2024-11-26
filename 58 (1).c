#include <stdio.h>
int main(){
int i,n;
int arr1[10];
int arr2[10];
int arr[10];
   
   printf("enter elements of first aaray \n");
   
   for(i=0;i<10;i++)
   {
   printf("enter number = \n");
   scanf("%d",&arr1[i]);
   
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
   
    arr[i] = arr1[i]+arr2[i];
   
   }
    
    printf(" array[10]={%d,%d,%d,%d,%d,%d,%d,%d,%d,%d} ",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
     
     return 0;
 }