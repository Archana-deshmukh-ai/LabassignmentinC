#include <stdio.h>

void modifyValue(int *target, int newValue) {
    *target = newValue;  // Modify the value at the memory location pointed to by 'target'
}

int main() {
    int a = 10;  // Original variable
    int b = 20;  // Variable whose value will be modified

    printf("Before modification:\n");
    printf("a = %d, b = %d\n", a, b);

    // Modify 'b' using a pointer
    modifyValue(&b, a);  // Pass the address of 'b' and the new value (value of 'a')

    printf("After modification:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}