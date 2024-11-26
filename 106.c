#include<stdio.h>
#include<string.h>
int main()
{
    struct item{
     char item_name[50];
     float quantity;
     float price;
     float amount;
    }item1;
    printf("Enter the item name ");
    scanf("%s",item1.item_name);
    printf("Enter the quantity ");
    scanf("%f",&item1.quantity);
    printf("Enter the price ");
    scanf("%f",&item1.price);
     item1.amount=(item1.quantity)*(item1.price);
    printf("Item     :%s\n",item1.item_name);
    printf("quantity :%f\n",item1.quantity);
    printf("price    :%f\n",item1.price);
    printf("amount   :%f\n",item1.amount);
    
    return 0;
}