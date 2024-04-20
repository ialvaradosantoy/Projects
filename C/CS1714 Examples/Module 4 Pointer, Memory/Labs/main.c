#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char* argv[]){
        int userNum;
        int* myData;
        int i;
        double sum = 0.0;
        scanf("%d", &userNum);
        myData = (int*)malloc((userNum + 1) * sizeof(int));
        for (i = 0; i < userNum; i++){
                myData[i] = i;
        }
        for ( i = 0; i < userNum; i++){
                printf("%d ", myData[i]);
                sum = sum + i;
        }
        printf("\n");
        printf("average: %.2lf\n", (sum / userNum));
        free(myData);
        return 0;
}