#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;

   scanf("%lf", &x);
   scanf("%lf", &y);
   scanf("%lf", &z);
   
   printf("%.2lf %.2lf %.2lf %.2lf\n", (pow(x, z)), (pow(x, (pow(y, 2)))), (fabs(y)), (sqrt(pow((x * y), z))) ); 

   return 0;
}