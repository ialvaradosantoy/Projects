#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    char major[50];
    int age;
    double gpa;
};

int main ()
{
    struct student student1;
    student1.age =26;
    student1.gpa = 3.3;
    strcpy(student1.name, "Ivan");
    strcpy(student1.major, "ComputerScience");

    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);

    struct student student2;
    student2.age =27;
    student2.gpa = 3.8;
    strcpy(student2.name, "Ivan");
    strcpy(student2.major, "ComputerScience");

    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    printf("%d\n", student2.age);
    printf("%f\n", student2.gpa);

    return 0;
}