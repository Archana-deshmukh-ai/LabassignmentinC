#include <stdio.h>

int main() {
     int arr[10],a=0,i,k=0;
     for(i=0;i<10;i++){
    printf("enter %d element of array: ", i+1);
    scanf("%d",&arr[i]);
       if(arr[i]%2!=0)
       a++;
       else k++;
     }
printf("total no.of odd elements is %d \n",a);
printf("total no.of even elements is %d",k);
    return 0;
}