#include <stdio.h>

int main() {
   int arr[10],sum=0;
   for(int i=0;i<10;i++){
       printf("enter element %d of array: ", i+1);
       scanf("%d", &arr[i]);
       sum+=arr[i];
   }
   for(int i=0;i<10;i++){
   printf("%d\n",arr[i]);
   }
printf("sum of array is %d",sum);
    return 0;
}