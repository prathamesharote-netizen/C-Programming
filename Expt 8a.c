#include <stdio.h>

/* 
 * Name: Prathamesh Lakshman Arote
 * Class: Civil
 * Division: B
 * UIN: 2510022
 * Age: 17 
 */
int findStringLength(const char* str) { 
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    
    int length = findStringLength(myString); 
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}
