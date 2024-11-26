#include <stdio.h>

int main() {
    int rows;
    printf("enter no. of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++)
     {
         for(int j=1;j<=rows;j++){
             if(i!=j)
             printf("0");
             else
             printf("1");
         }
         printf("\n");
     }
    return 0;
}