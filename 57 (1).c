#include <stdio.h>

int main() {
    int i,n,max1=0,max2=0;
    printf("enter no. of numbers: ");
    scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
         printf("%d number is: ", i+1);
         scanf("%d", &a[i]);
    int a[n]; }
     
     for(i=0;i<n;i++){
        
         if(max1<a[i])
         max1=a[i];
     }
     for(i=0;i<n;i++){
        
         if(max2<a[i]&&a[i]<max1)
         max2=a[i];
     }
printf("1st maximum number is  %d and 2nd maximum number is %d", max1,max2);
    return 0;}