#include<stdio.h>
int main()
{
  int sale, com;
  printf("Enter sale: ");
  scanf("%d",&sale);
  
  if(sale<=500){
      com=(0.05)*sale;
  printf("commission is %d",com);
  }
  else if (sale>500&&sale<=2000){
  printf("commission is rs.35 plus 10% above rs. 500");
    com=( 35+(0.10)*(sale-500));
    printf("\n%d",com);
    }
  else if(sale>2000&&sale<=5000){
  printf("commission is rs.185 plus 12% above rs.2000");
    com=185+((0.12)*(sale-2000));
    printf("%d",com);
    }
  else{
  printf("commission is 12.5%");
  com=((0.125)*sale);
  printf("%d",com);
}

return 0;
}