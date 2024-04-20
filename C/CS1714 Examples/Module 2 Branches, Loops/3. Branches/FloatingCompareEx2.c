#include <stdio.h>
#include <math.h>

int main(void) {
   double targetValue;
   double sensorReading;

   scanf("%lf", &targetValue);
   scanf("%lf", &sensorReading);

   if (fabs(sensorReading - targetValue) < 0.0001) {
      printf("Equal\n");
   }
   else {
      printf("Not equal\n");
   }

   return 0;
}