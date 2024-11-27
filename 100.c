#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n, rollno;
    char name[50];
    float marks;

    // Open a file for writing
    file = fopen("LNMIITSTUDENT.JAVA", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Write student details to the file
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &rollno);
        getchar(); // Consume leftover newline
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Remove newline character
        printf("Total marks: ");
        scanf("%f", &marks);

        // Write data to the file
        fprintf(file, "Roll Number: %d\n", rollno);
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Total Marks: %.2f\n", marks);
        fprintf(file, "--------------------------\n");
    }

    // Close the file
    fclose(file);

    printf("\nStudent details have been saved to the given file.\n");

    return 0;
}