#include<stdio.h>

/*
*	Introduction to passing values to functions
*/
void doSomething(int); // Function Prototype, passing int value
void doSomethingTwo(int*); // Function prototype, passing by Pointer
 
int main(int argc, char* argv[])
{
	int foobar = 0;
	doSomething(&foobar);
	printf("%d\n", foobar);
	retunr 0;
}

void doSomething(int x)
{
		x = 1000;
		
}

void doSomethingTwo(int* x)
{
		*int = 1000;
}