#include <stdio.h>
int main() 
{
      int h, m, s, seconds;
      printf("Enter the total number of time in seconds: ");
      scanf("%d",&seconds);
      h=(seconds) /3600;
      m=(seconds-h*3600)/60;
      s=seconds-h*3600-m*60;
      printf ("time=%d:%d:%d", h, m, s);
return 0;













}