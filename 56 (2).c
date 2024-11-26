#include <stdio.h>

int main() {
     int arr[10],a=0,i,k=0,j=0;
     for(i=0;i<10;i++){
    printf("enter %d element of array: ", i+1);
    scanf("%d",&arr[i]);
       if(arr[i]>0)
       a++;
       else if(arr[i]<0) k++;
       else j++;
     }
printf("total no.of positive elements is %d \n",a);
printf("total no.of negative elements is %d \n",k);
printf("total no.of zero elements is %d",j);
    return 0;
}