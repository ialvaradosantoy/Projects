#include <stdio.h>
#include <math.h>

int main(void) {
   double bodyTemp;
   
   printf("Enter body temperature in Fahrenheit: ");
   scanf("%lf", &bodyTemp);
   
   if (fabs(bodyTemp - 98.6) < 0.0001) {
      printf("Temperature is exactly normal.\n");
   }
   else if (bodyTemp > 98.6) {
      printf("Temperature is above normal.\n");
   }
   else {
      printf("Temperature is below normal.\n");
   }
   
   return 0;
}