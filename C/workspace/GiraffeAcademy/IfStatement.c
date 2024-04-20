#include <stdio.h>
#include <stdlib.h>

int findMax(int num1, int num2, int num3);


int main ()
{
    printf("Max is : %d\n", findMax(2,3, 4));
    printf("Max is : %d\n", findMax(2,2, 2));
    printf("Max is : %d\n", findMax(4, 3, 2));

    return 0;
}

int findMax(int num1, int num2, int num3)
{
    int max;

    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }

    return max;
}