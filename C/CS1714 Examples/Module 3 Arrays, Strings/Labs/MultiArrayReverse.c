#include <stdio.h>
/*
*	Read 12 integers from user into a 2D array with 4 rows
*	and 3 columns. Output the 2D array in reverse
*	order according to both rows and columns.
*	(Half of the 2D array is reversed then printed
*/
int main(int argc, char* argv[]){
	int rows = 4;
	int columns = 3;
	int userVals[rows][columns];
	int i;
	int j;
	int temp = 0;
	
	for (i = 0; i < rows; i++){
		for (j = 0; j < columns; j++){
			scanf("%d", &(userVals[i][j]));
		}
	}
	
	for (i = 0; i < (rows / 2) ; i++){
		for (j = 0; j < columns; j++){
			temp = userVals[i][j];
			userVals[i][j] = userVals[rows - 1 - i][columns - 1 - j];
			userVals[rows - 1 - i][columns - 1 - j] = temp;
		}
	}
	
	for (i = 0; i < rows; i++){
		for (j = 0; j < columns; j++){
			printf("%d ", (userVals[i][j]));
		}
		printf("\n");
	}
	
	printf("\n");
	
	return 0;
}