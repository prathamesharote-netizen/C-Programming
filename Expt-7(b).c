#include <stdio.h>

int main() {
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };
    int b[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sum[2][2];
    int i, j;

    // Calculate sum of the two matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result
    printf("Sum of two matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
