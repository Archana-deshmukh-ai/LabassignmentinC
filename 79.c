#include<stdio.h>
//to exchange x and y
void swap(int* a,int* b){
int temp;
temp=a;
a=b;
b=temp;
printf("Afer exchange \nx=%d,y=%d",a,b);
}
int main ()
{
  int x,y;
  printf ("enter numbers x and y ");
  scanf("%d%d",&x,&y);
  swap(x,y);
    return 0;
}