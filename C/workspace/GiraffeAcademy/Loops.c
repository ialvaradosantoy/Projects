#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // int index1 = 1;
    // // While loops
    // while(index1 <=5)
    // {
    //     printf("While loop: %d\n", index1);
    //     //index1 = index1 + 1;
    //     index1++;
    // }

    // int index2 = 1;
    // // Do while loop
    // do{
    //     printf("Do while loop: %d\n", index2);
    //     //index2 = index2 + 1;
    //     index2++;
    // } while(index2 <=5);

    // // For Loop
    // int j;
    // for (j = 1; j <= 5; j++)
    // {
    //     printf("For loop: %d\n", j);
    // }

    // // For loop traversing an integer array
    // int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    // for (int k = 0; k < 6; k++)
    // {
    //     printf("luckyNumbers[%d]: %d\n", k, luckyNumbers[k]);
    // }

    // Nested for loop
    // 2 dimensional arrays
    int nums[3][2] = {{1,2}, {3,4}, {5,6}};  // height (3) x width (2)
    int a, b;  // delaring two variables

    for(a = 0; a < 3; a++)
    {
        for(b = 0; b < 2; b++)
        {
            printf("%d,", nums[a][b]);
        }
        printf("\n");
    }

    return 0;
}