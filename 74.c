#include<stdio.h>
 
int main() {

    int Num1[4]={1,3,5,7}, Num2[5]={2,4,6,8,10}, a[9], i, j, temp=0;
    
    for(i=0; i<4; i++) 
        a[i]=Num1[i];
    for(i=0;i<5;i++)
        a[i+4]=Num2[i];
    

    for (int i = 0; i < 9 - 1; i++) {
        int min = i;  
        for (int j = i + 1; j < 9; j++) {
            if (a[j] < a[min]) {
                min= j;
            }
        }
        
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    
    for (int k = 0; k < 9; k++) {
        printf("%d ", a[k]);
    }


    return 0;
}