#include<stdio.h>

int main(int argc, char* argv[]) {
	int maxNum;
	int userNum;
	int userSum = 0;
	int count = 0;
	int avg;
	
	scanf("%d", &userNum);
	
	while (userNum >= 0) {
		if ((count == 0) || (userNum > maxNum)){
			maxNum = userNum;
		}
		userSum += userNum;
		scanf("%d", &userNum);
		count++;
	}
	
	avg = userSum / count;
	
	printf("%d %d\n", maxNum, avg);
	
	return 0;
}