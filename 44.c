#include<stdio.h>
int main()
{
int c, d;
printf("Enter the consumption in units: ");
scanf("%d",&c);
if(c<=200){
printf("Rate for charge is rs. 0.50 per unit\n");
 d=((0.50)*c);
 printf("%d",d);
 }
else if(c<=400){
printf("rate for charge is rs.100 plus re. 0.65 per excess unit above 200");
d=((0.65)*(c-200)+100);
printf("\n%d",d);
}
else if (c<=600){
printf("rate for charge is rs.230 plus re. 0.80 per excess unit above 400");
d=((0.80)*(c-400)+230);
printf("\n%d",d);
}
else{
printf("rate for charge is rs.435 plus rs.125 per excess unit above 600");
d=((125)*(c-600)+435);
printf("\n%d",d);
}




return 0;










}