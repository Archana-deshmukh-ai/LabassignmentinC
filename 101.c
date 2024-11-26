#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[256];  // Buffer to hold the input data

    // Open the file in append mode
    file = fopen("LNMIITSTUDENT.DAT", "a");
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Enter data to append to the file (max 255 characters): ");
    fgets(data, sizeof(data), stdin);

    // Write the data to the file
    fprintf(file, "%s", data);
    printf("Data successfully appended to the file.\n");

    // Close the file
    fclose(file);

    return 0;
}