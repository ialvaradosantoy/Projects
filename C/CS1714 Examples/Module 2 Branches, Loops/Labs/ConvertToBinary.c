#include<stdio.h>

int mai(int argc, char* argv[]){
	int userNum;
	
	scanf("%d", &userNum);
	
	while (userNum > 0){
		printf("%d", (userNum % 2));
		userNum = userNum / 2;
	}
	printf("\n");
	return 0;
}