#include <stdio.h>

typedef struct Height_struct {
   int feet;
   int inches;
} Height;

int main() {
   Height annHeight;

   annHeight.feet = 5;
   annHeight.inches = 10;

   printf("Ann: %dft %d\n", annHeight.feet, annHeight.inches);

   return 0;
}