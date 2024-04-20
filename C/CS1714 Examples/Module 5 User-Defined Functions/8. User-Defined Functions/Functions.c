#include<stdio.h>

/*
*	Introduction to Function prototypes and function definitions
*/
int doSomething(); // Function Prototype
double average(int[], int);

int main(int argc, char* argv[])
{
	int result = 0, i = 0, n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	printf("Average of array = %lf\n", average(arr, n);
	for (i = 0; i < 5; i++)
	{
		result = doSomething();
		printf("%d\n", result);
	}
	retunr 0;
}

int doSomething()
{
		int x = 0;
		x = x + 5;
		return x;
}

double average(int array[], int n)
{
		int i = 0;
		double avg = 0.0;
		for(i = 0; i < n; i++)
			avg +- array[i];
		avg = avg / n;
		
}