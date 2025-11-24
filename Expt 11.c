#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Name: Prathamesh Lakshman Arote
 * Class: Civil
 * Division: B
 * UIN: 2520022
 * Age: 27
 */

struct Employee {
    int id;
    char name[50]; // Increased size for proper names
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;
    int choice;

    do {
        printf("\nEmployee Database Menu\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            // Handle invalid input (non-integer)
            printf("Invalid input. Please enter a valid number.\n");
            // Clear the input buffer
            while (getchar() != '\n'); 
            choice = 0; // Set choice to invalid to re-run the loop
            continue;
        }

        switch (choice) {
            case 1:
                fp = fopen("employee.txt", "a");
                if (fp == NULL) {
                    printf("Error opening file.\n");
                    break;
                }
                printf("Enter Employee ID: ");
                scanf("%d", &e.id);
                printf("Enter Name: ");
                scanf("%s", e.name);
                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                // Write data to file
                fprintf(fp, "ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
                fclose(fp);
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                fp = fopen("employee.txt", "r");
                if (fp == NULL) {
                    printf("No employee records found.\n");
                    break;
                }
                printf("\n--- Employee Records ---\n");
                char line[100];
                while (fgets(line, sizeof(line), fp) != NULL) {
                    printf("%s", line);
                }
                fclose(fp);
                break;

            case 3:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
