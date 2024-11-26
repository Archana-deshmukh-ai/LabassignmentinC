//93 
#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}