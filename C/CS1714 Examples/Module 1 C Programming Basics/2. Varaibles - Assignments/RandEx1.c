#include <stdio.h>
#include <stdlib.h>   // Enables use of rand() by including standard library

int main(void) {
   printf("%d\n", rand());
   printf("%d\n", rand());
   printf("%d\n", rand());

   printf("RAND_MAX: %d\n", RAND_MAX);

   return 0;
}