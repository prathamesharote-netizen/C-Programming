//Name-Prathamesh Arote 
// Roll no.-19
// Div-B
#include <stdio.h>
int factorial(int num) {
    if (num < 0) {
        return -1;
    }int fact = 1;
    for (int i = 1; i <= num; i++) { 
        fact = fact * i;
    }
    return fact;}
int main() {
    int xyz;
    int input_num = 5;
   xyz = factorial(input_num); 
   if (xyz == -1) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %d\n", input_num, xyz);
    }

    return 0;
}
