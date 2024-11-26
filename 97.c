#include <stdio.h>

int main() {
    char str[100];
    char *pStr;
    int vowelCount = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    pStr = str;
    while (*pStr != '\0') {
        if (*pStr == 'a' || *pStr == 'e' || *pStr == 'i' || *pStr == 'o' || *pStr == 'u' ||
            *pStr == 'A' || *pStr == 'E' || *pStr == 'I' || *pStr == 'O' || *pStr == 'U') {
            vowelCount++;
        }
        pStr++; 
    }
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}