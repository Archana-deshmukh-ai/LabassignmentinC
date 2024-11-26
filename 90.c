#include <stdio.h>

int main() {
    char str[100];
    char *pStr = str;
    int lengthIncludingSpaces = 0, lengthExcludingSpaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (*pStr != '\0') {
        lengthIncludingSpaces++; 
        if (*pStr != ' ' && *pStr != '\n') {
            lengthExcludingSpaces++; 
        }
        pStr++;
    }
    printf("Length including spaces: %d\n", lengthIncludingSpaces - 1); 
    printf("Length excluding spaces: %d\n", lengthExcludingSpaces);

    return 0;
}