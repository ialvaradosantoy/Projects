#include <stdio.h>
/*
*	Normalize values between a range or throw away outliers
*/
int main(int argc, char* argv[]){
	const int NUM_VALUES = 20;
	double userArr[NUM_VALUES];
	int userNum;
	int i;
	double maxNum;
	
	scanf("%d", &userNum);
	
	for (i = 0; i < userNum; i++){
		scanf("%lf", &(userArr[i]));
	}
	
	maxNum = userArr[0];
	
	for( i = 0; i < userNum; i++){
		if (userArr[i] > maxNum){
			maxNum = userArr[i];
		}
	}
	
	for (i = 0; i < userNum; i++){
		printf("%0.2lf ", (userArr[i] / maxNum));
	}
	
	printf("\n");
	
	return 0;
}