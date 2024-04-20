#include <stdio.h>

/*
*	Program stores a sorted list of integers, then ouputs
*	the middle integer. A negative number indicates the end
*	of the input (not part of the sorted list. Assume 
*	 number of integers is always odd.
*/
int main(int argc, char* argv[]){
	const int NUM_ELEMENTS = 9;
	int userValues[NUM_ELEMENTS];
	int middleNum;
	int i;
	int count = 1;
	
	for (i = 0; i < NUM_ELEMENTS; i++){
		scanf("%d", &(userValues[i]));
		count++;
		if (userValues[i] == -1){
			break;
		}
	}
	
	middleNum = (NUM_ELEMENTS / 2) - 1;
	
	printf("Middle item: %d\n", userValues[middleNum]);
	
	return 0;
}