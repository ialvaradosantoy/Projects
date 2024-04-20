#include <stdio.h>
#include <stdlib.h>

double cubeNumber(double num);  // function prototype

int main ()
{

    cubeNumber(3.0);  // calling function
    printf("Answer: %f\n", 9.0);

    return 0;
}

double cubeNumber(double num) // function definition
{
    return num * num * num;
}
