#include <stdio.h>
#include <math.h>
#define LENGTH 10
/*
*	Get integers input from user and store in an array,
*	and then calculate the avg of thhose values. Array
*	length will be set by preprocessor directive used as
*	a constant. Calculate std deviation, then output
*	avg and std deviation.
*	Use, gcc filename.c -Wall -o a.out -lm, command to compile
*	code on linux server. Use, ./a.out, command to run code.
*/
int main(int argc, char* argv[]){
	double userVals[LENGTH];
	double sum;
	double sumTwo;
	double avg;
	double stdDev = 0;
	int i;
	
	for (i = 0; i < LENGTH; i++){
		scanf("%lf", &(userVals[i]));
	}
	
	sum = 0;
	
	for (i = 0; i < LENGTH; i++){
		sum += userVals[i];
	}
	
	avg = sum / ((double) LENGTH);
	printf("average: %0.2lf\n", avg);
	
	for (i = 0; i < LENGTH; i++){
		sumTwo = pow(fabs(userVals[i] - avg), 2);
		stdDev += sumTwo;
	}
	stdDev = stdDev / LENGTH;
	stdDev = sqrt(stdDev);
	printf("standard deviation: %0.2lf\n", stdDev);
	
	return 0;
}