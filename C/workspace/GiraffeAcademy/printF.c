#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("Hello my name is, "); // printf function in C is used for outputting data 
    printf("Ivan Alvarado-Santoy\n");  // \n is the new line character for printing a new line after texts
    printf("I am %d years old\n", 26); // %d is a format specifier for embedding data in text to be printed out, %d is used for integers
    printf("My favorite %s is %d1\n", "number", 11); // multiple format specifiers in one line seperated by a ","

    int favNum = 11;
    printf("My favorite %s is %d1\n", "number", favNum); // same as line 9 but with variable
    printf("My favorite character is %c\n", 'I'); // printing a single character
    printf("%f\n", 8.9); // printing a floating point number
    printf("%f\n", (8.9 + 5)); 
    return 0;
}