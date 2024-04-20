#include<stdio.h>

int main(int rgc, char* argv[]) {
	int i = 0;
	int userNum;
	int count = 1;
	scanf("%d", &userNum);
	
	do {
		for (i = 1; i <= 10; ++i){
		   if (count == 1){
		      if (userNum == 1){
		         printf("%d", userNum);
		         count++;
				   break;
			   }
			   else {
			      printf("%d\t", userNum);
			      count++;
				   continue;
			   }
		   }
			if (userNum % 2 == 0){
				userNum = userNum / 2;
			}
			else {
				userNum = (userNum * 3) + 1;
			}
			if (userNum == 1){
			   printf("%d", userNum);
				break;
			}
			else {
			   printf("%d\t", userNum);
				continue;
			}
				
		}
		printf("\n");
	} while (userNum != 1);
	return 0;
}