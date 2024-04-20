#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age;
    // prompting user for integer input
    printf("Enter your age: ");

    scanf("%d", &age); // get input integer data and store it in age, "&" is needed with age variable to store in address of age

    printf("You are %d years old\n", age);

    double gpa;
    // prompting user for double input
    printf("Enter your gpa: ");

    scanf("%lf", &gpa); // get input double data and store it in gpa, "&" is needed with gpa variable to store in address of gpa

    printf("Your gpa is %f\n", gpa);

    char grade;
    // prompting user for character input
    printf("Enter your grade: ");

    scanf(" %c", &grade); // get input char data and store it in grade, "&" is needed with grade variable to store in address of grade
    // must include a space in " %c" to get input correctly

    printf("Your grade is %c\n", grade);

    char fname[20];
    // prompting user for string input
    printf("Enter your first name: ");

    scanf("%s", fname); // get input string data and store it in fname, "&" is not needed with name b/c fname is an array which is already an address in itself
    printf("Your first name is %s\n", fname);

    char lname[20];
    // prompting user for string input
    printf("Enter your name: ");

    scanf("%s", lname);

    //fgets(name, 20, stdin); // get input string data up to 20 characters and store it in name, "&" is not needed with name b/c fgets only takes in string type
    printf("Your last name is %s\n", lname);

    return 0;
}