#include<stdio.h>
int main() {
    int num, sum = 0;  

    
    do {
        printf("Enter a number (Enter a negative number to stop): ");
        scanf("%d", &num);  

        if (num >= 0) {
            sum = sum + num;  
        }

    } while (num >= 0);  

    
    printf("Sum of entered numbers: %d\n", sum);

    return 0;  
}
