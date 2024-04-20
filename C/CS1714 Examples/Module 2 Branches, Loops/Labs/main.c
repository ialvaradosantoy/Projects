#include <stdio.h>

int main(int argc, char *argv[]){
	int userNum;

	scanf("%d", &userNum);

	if ((userNum % 3)  == 0){
		printf("CS");
	}
	if ((userNum % 5) == 0){
		printf("1714");
	}
	if (((userNum % 3) == 0) && ((userNum % 5) == 0)){
		printf("CS1714");
	}
	if (((userNum % 3) != 0) || ((userNum % 5) != 0)){
		printf("ERROR");
	}
	return 0;
}
