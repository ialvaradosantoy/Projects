#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double num1;
    double num2;
    double answer;

    printf("Enter first operand: ");

    scanf("%lf", &num1);
    
    printf("Enter second operand: ");
    
    scanf("%lf", &num2);
    
    answer = num1 + num2;

    printf("Answer: %f\n", num1 + num2);

    return 0;
}