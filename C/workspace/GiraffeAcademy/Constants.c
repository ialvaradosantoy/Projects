#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num = 5;
    const NUM_TWO = 10;
    printf("%d", num);
    printf("%d", NUM_TWO);

    num = 6;
    NUM_TWO =7;

    printf("%d", num);
    printf("%d", NUM_TWO);

    return 0;
}