#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to concatenate two strings
void stringConcat(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    
    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    
    // Append second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0'; // Null-terminate the result
}

// Function to copy one string into another
void stringCopy(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the copied string
}

// Function to reverse a string
void stringReverse(char str[]) {
    int length = stringLength(str);
    int start = 0, end = length - 1;
    char temp;
    
    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

// Function to compare two strings lexicographically
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    
    // If one string is a prefix of the other
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100], result[200], copied[100];

    // Input strings
    printf("Enter the first string: ");
    scanf("%99s", str1);
    printf("Enter the second string: ");
    scanf("%99s", str2);

    // Length of the first string
    int length = stringLength(str1);
    printf("Length of first string: %d\n", length);

    // Concatenation of strings
    stringConcat(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    // Copy string
    stringCopy(str1, copied);
    printf("Copied string: %s\n", copied);

    // Reverse the first string
    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);

    // Compare strings
    int cmp = stringCompare(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal.\n");
    } else if (cmp < 0) {
        printf("First string is less than the second string.\n");
    } else {
        printf("First string is greater than the second string.\n");
    }

    return 0;
}