#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    // Printing memory address requires using %p (pointer) format sepcifier
    printf("Memory address of age: %p\n", &age); // prints the memory address of integer variable age
    printf("Memory address of gpa: %p\n", &gpa); // prints the memory address of double variable gpa
    printf("Memory address of grade: %p\n", &grade); // prints the memory address of character variable grade

    return 0;
}