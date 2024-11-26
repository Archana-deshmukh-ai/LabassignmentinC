#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countVowels(FILE *file) {
    char ch;
    int vowelCount = 0;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Convert character to lowercase and check if it is a vowel
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    char filename[100];
    FILE *file;
    int vowelCount;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Count vowels in the file
    vowelCount = countVowels(file);

    // Close the file
    fclose(file);

    // Print the result
    printf("The number of vowels in the file is: %d\n", vowelCount);

    return 0;
}