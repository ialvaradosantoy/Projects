#include <stdio.h>
/*
*	Read a list of integers and output those integers
*	and output those integers in reverse. First input 
*	indicates the number of integers that follow. Assume
*	number of integers is odd
*/
int main(int argc, char* argv[]){
	const int NUM_ELEMENTS = 20;
	int userVals[NUM_ELEMENTS];
	int userNum;
	int i;
	int temp = 0;
	
	scanf("%d", &userNum);
	
	for (i = 0; i < userNum; i++){
		scanf("%df", &(userVals[i]));
	}
	
	for (i = 0; i < (userNum / 2); i++){
		temp = userVals[i];
		userVals[i] = userVals[userNum - 1 - i];
		userVals[userNum - 1 - i] = temp;
	}
	
	for (i = 0; i < userNum; i++){
		printf("%d,", userVals[i]);
	}
	
	printf("\n");
	
	return 0;
}