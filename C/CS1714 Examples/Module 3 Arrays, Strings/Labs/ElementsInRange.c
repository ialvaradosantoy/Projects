#include <stdio.h>
/*
*	Program stores first user input for number of
*	inputs to store in userArr array, standard array
*	length is 20. After array is completed next two
*	user inputs are for lower and upper bounds to use
*	as ranges to print values
*/
int main(int argc, char* argv[]){
	const int NUM_VALUES = 20;
	int userArr[NUM_VALUES];
	int userNum;
	int i;
	int lowerNum;
	int upperNum;
	
	scanf("%d", &userNum);
	
	for (i = 0; i < userNum; i++){
		scanf("%d", &(userArr[i]));
	}
	scanf("%d", &lowerNum);
	scanf("%d", &upperNum);
	
	for (i = 0; i < userNum; i++){
		if ((userArr[i] >= lowerNum) && (userArr[i] <= upperNum)){
			printf("%d,", userArr[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}