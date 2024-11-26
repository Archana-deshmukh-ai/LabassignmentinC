#include <stdio.h>
int main() {
   char c;
   printf("Enter any character: ");
   scanf("%c",&c);
   
        if(c >= 'A'&&c <= 'Z')
        {
        printf("the character %c is uppercase",c);
        }
        else if(c >= 'a' && c <= 'z')
        {
        printf("the character %c is lowercase",c);
        }

        else if (c >= '0'&&c <= '9')
        { 
        printf("the character %c is a digit",c);
        }

         else
        {
        printf("the character %c is special character",c);
        }
    return 0;




}