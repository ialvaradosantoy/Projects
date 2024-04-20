#include <stdio.h>
#include <stdlib.h>

void sayHi();  // function prototype
void sayHiDirect(char name[], int age);

int main ()
{
    printf("Top\n");
    sayHi();  // calling function
    printf("Bottom\n");
    sayHiDirect("Ivan", 26);

    return 0;
}

void sayHi()  // function definition
{
    printf("Hello User!\n");
}

void sayHiDirect(char name[], int age)
{
    printf("Hello %s! You are %d\n", name, age);
}