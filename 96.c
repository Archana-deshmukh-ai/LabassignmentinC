#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

void sortStrings(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap the strings
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LENGTH];

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline character left in the buffer

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        // Remove newline character if it exists
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    sortStrings(strings, n);

    printf("\nStrings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}