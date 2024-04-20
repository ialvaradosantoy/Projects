#include <stdio.h>

int main(void) {
	int userNum1;
	int userNum2;
	int userNum3;
	
	scanf("%d", &userNum1);
	scanf("%d", &userNum2);
	scanf("%d", &userNum3);
	
	if ((userNum1 < userNum2) && (userNum1 < userNum3)){
		printf("%d\n", userNum1);
	}
	if ((userNum2 < userNum1) && (userNum2 < userNum3)){
		printf("%d\n", userNum2);
	}
	if ((userNum3 < userNum1) && (userNum3 < userNum2)){
		printf("%d\n", userNum3);
	}
	if ((userNum3 == userNum1) || (userNum3 == userNum2)){
		printf("%d\n", userNum3);
	}
	return 0;
}