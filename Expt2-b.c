/* Name: Prathamesh Lakshman Arote
UIN: 2510022
Branch: Civil
Div: B*/
#include<stdio.h>
void main()
{
    int i, num1, num2, sum=0;
    printf("Enter two number");
    scanf("%d %d", &num1, &num2);
    if (num1>num2)
    {
        printf("It cannot be compiled");
    }
    else
    {
        for(i=num1+1;i<num2;i++)
        {
            if(i%2==1)
            {
                sum += i;
            }
        }
    }
    printf("Sum of odd numbers between the entered numbers is: %d", sum);
}
