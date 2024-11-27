#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void countFileContent(FILE *file, int *lines, int *words, int *characters) {
    char ch;
    int inWord = 0;

    // Initialize counts
    *lines = 0;
    *words = 0;
    *characters = 0;

    while ((ch = fgetc(file)) != EOF) {
        (*characters)++; // Count every character

        // Count lines
        if (ch == '\n') {
            (*lines)++;
        }

        // Count words
        if (isspace(ch)) {
            if (inWord) {
                inWord = 0;
                (*words)++;
            }
        } else {
            inWord = 1;
        }
    }

    // If the last character is part of a word, count it
    if (inWord) {
        (*words)++;
    }
}

int main() {
    char filename[100];
    FILE *file;
    int lines, words, characters;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Count lines, words, and characters
    countFileContent(file, &lines, &words, &characters);

    // Close the file
    fclose(file);

    // Display results
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);

    return 0;
}