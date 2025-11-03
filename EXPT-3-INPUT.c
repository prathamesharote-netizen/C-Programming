#include <stdlib.h>

int main() {
    int num1, num2, choice;

    start:
    printf("\n\nEnter any 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nSum is %d", num1 + num2);
            break;
        case 2:
            printf("\nSubtraction is %d", num1 - num2);
            break;
        case 3:
            printf("\nProduct is %d", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("\nDivision is %f", (float)num1 / num2);
            } else {
                printf("\nCannot divide by zero.");
            }
            break;
        case 5:
            printf("\nExiting program.");
            return 0;
        default:
            printf("\nInvalid choice.");
            break;
    }
    
    goto start;
    
    return 0;
}
