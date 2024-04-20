#include <stdio.h>

int main(void) {
   int userAgeYears;
   int userAgeDays;
   int userAgeMinutes;
   
   printf("Enter your age in years: ");
   scanf("%d", &userAgeYears);
   
   userAgeDays = userAgeYears * 365;               // Calculate days without leap years
   userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years
   
   printf("You are %d days old.\n", userAgeDays);
   
   userAgeMinutes = userAgeDays * 24 * 60;         // 24 hours/day, 60 minutes/hour
   printf("You are %d minutes old.\n", userAgeMinutes);
   
   return 0;
}