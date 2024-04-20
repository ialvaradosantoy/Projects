#include<stdio.h>

int main(int argc, char* argv[]) {
	int maxNum;
	int userNum;
	
	scanf("%d", &userNum);
	maxNum = userNum;
	
	while (userNum >= 0) {
		scanf("%d", &userNum);
		if (userNum > maxNum){
			maxNum = userNum;
		}
	}
	
	printf("%d", maxNum);
	return 0;
}