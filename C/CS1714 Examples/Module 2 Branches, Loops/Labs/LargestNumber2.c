#include <stdio.h>

int main(){
	int userNum1;
	int userNum2;
	int userNum3;
	
	scanf("%d", &userNum1);
	scanf("%d", &userNum2);
	scanf("%d", &userNum3);
	
	if ((userNum1 > userNum2) && (userNum1 > userNum3)) {
		printf("%d\n", userNum1);
	}
	else if ((userNum2 > userNum1) && (userNum2 > userNum3)) {
		printf("%d\n", userNum2);
	}
	else if ((userNum3 > userNum1) && (userNum3 > userNum2)) {
		printf("%d\n", userNum3);
	}
	else if (userNum1 == userNum2) {
		if (userNum1 > userNum3){
			printf("%d\n", userNum1);
		}
		else {
			printf("%d\n", userNum3);
		}
	}
	else if (userNum1 == userNum3) {
		if (userNum1 > userNum2){
			printf("%d\n", userNum1);
		}
		else {
			printf("%d\n", userNum2);
		}
	}
	else if (userNum2 == userNum3) {
		if (userNum2 > userNum1){
			printf("%d\n", userNum2);
		}
		else {
			printf("%d\n", userNum1);
		}
	}


	return 0;
}