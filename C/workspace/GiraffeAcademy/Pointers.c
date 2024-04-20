#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Pointer is just a memory address, usualy stores the address of a non-variable type already defined
    // Pointer is just a type of data, stores an address and that address has a value

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    int *ptrAge = &age;

    printf("age's memory address: %p\n", &age);  // &age is a pointer, stores the address of integer variable age
    printf("age's value: %d\n", age);  // age is an integer, stores the value of an integer variable age
    printf("ptrAge's memory address: %p\n", ptrAge);  // ptrAge is a pointer, stores the address of integer variable age

    // Dereferencing a pointer, getting the value stored at the address stored in a pointer
    printf("ptrAge's value: %d\n", *ptrAge);
    return 0;
}