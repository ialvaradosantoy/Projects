#include <stdio.h>

/*
 * Estimates distance of lightning based on seconds
 * between lightning and thunder
 */

int main(void) {
   const double SPEED_OF_SOUND   = 761.207; // Miles/hour (sea level)
   const double SECONDS_PER_HOUR = 3600.0;  // Secs/hour
   double secondsBetween;
   double timeInHours;
   double distInMiles;

   printf("Enter seconds between lightning and thunder: ");
   scanf("%lf", &secondsBetween);

   timeInHours = secondsBetween / SECONDS_PER_HOUR;
   distInMiles = SPEED_OF_SOUND * timeInHours;

   printf("Lightning strike was approximately\n");
   printf("%lf", distInMiles);
   printf(" miles away.\n");

   return 0;
}