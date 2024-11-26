#include<stdio.h>
int fun()
{
int max=0;
int arr[5];
printf("enter numbers in array \n");
for(int i=0;i<5;i++)
{
 printf("arr[%d]= ",i);
 scanf("%d",&arr[i]);
 if(max<arr[i])
 max=arr[i];
 }
return max;
}
int main()
{
int p=fun();
printf("%d is max ",p);
}