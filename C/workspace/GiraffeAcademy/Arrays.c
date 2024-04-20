#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Container (data structure) storing multiple values of a singular data type
    // indexing starts at 0
    // 1 dimensional
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
                // index  0  1  2   3   4   5
    printf("%d", luckyNumbers[0]);  // accessing and printing element 0 of luckyNumbers array
    

    luckyNumbers[1] = 200;    // modifying element at index 1 of array
     

    int luckyNumbers2[10];  // array that holds 10  integer elements
    luckyNumbers2[1] = 80;
    printf("%d", luckyNumbers2[0]);  // will result in error because element at index 0 not defined

    luckyNumbers2[0];

    char phrase[20] = "Array";  // array of characters known as a string in C language

    // 2 dimensional arrays
    int nums[3][2] = {{1,2}, {3,4}, {5,6}};  // height (3) x width (2)

    printf("%d", nums[0][0]);  // prints 1
    printf("%d", nums[1][1]);  // prints 4

    int nums2[3][2];  // uninitialized

    



    return 0;
}