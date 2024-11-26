#include <stdio.h>
int main ()
{
     long long int hours, minutes, seconds;
     printf("Enter the number of hours: ");
     scanf("%lld",&hours);
     printf("Enter the number of minutes: ");
     scanf("%lld",&minutes);
     printf("Enter the number of seconds: ");
     scanf("%lld",&seconds);
     
     long long int totalseconds;
     totalseconds=hours*3600+minutes*60+seconds;
     printf("%lld is the total seconds",totalseconds);
     return 0;
     












}