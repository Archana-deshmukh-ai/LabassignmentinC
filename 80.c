#include<stdio.h>
int fibo(){ 
  // program to print fibonacci series
   int sum=0,a=0,b=1,n,count=0;//a and b are default num in fibonacci series
   printf("enter n = \n");
   scanf("%d",&n);
   while(count<n){
    //each number is equal lo sum of preceding two numbers 
     a=b;
     b=sum;
     printf("%d,",sum);
     sum=a+b;
     count++;
}}
int main()
{ fibo(); }