#include <stdio.h>

/* 
 * Name: Prathamesh Lakshman Arote
 * Class: Civil
 * Division: B
 * UIN: 2510022
 * Age: 17
 */
int factorial(int num){
    if (num == 0 || num == 1) { 
        return 1;
    } 
    
    else { 
    
        return num * factorial(num - 1); 
    }
}

int main() {
    printf("Factorial of 5 is %d\n", factorial(5));
    
    return 0;
}
