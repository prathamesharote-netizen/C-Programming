
#include <stdio.h>
 
    int main() 
    { 
    
/* Name-Prathamesh Lakshman
UIN-251C022
Class: civil*/
float physics, chemistry, maths, average;
printf("Enter Physics marks: ");
scanf("%f", &physics);
printf("Enter Chemistry marks: ");
scanf("%f", &chemistry);
printf("Enter maths marks: ");
scanf("%f", &maths);
average = (physics + chemistry + maths) / 3;
printf("Average PCM marks: %f\n", average);
printf("Admission Status: %s\n", (average >=50) ? "Eligible": "Not Eligible");

    
    return 0;
    }
    