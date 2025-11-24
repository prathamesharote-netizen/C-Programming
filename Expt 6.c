#include <stdio.h>

/* 
 * Name: Prathamesh Lakshman Arote
 * Class: Civil
 * Division: B
 * UIN: 2510022
 * Age: 17 
 */

void storage_class() {
    static int abc = 0; 
    printf("Counter is %d \n", abc);
    abc++;
}

int main() {
    storage_class();
    storage_class();
    storage_class();
    storage_class();
    
    return 0;
}
