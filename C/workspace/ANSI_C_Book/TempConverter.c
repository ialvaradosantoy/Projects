#include <stdio.h>

/* Instructions to run program on the command line
1. Compile c program and name the executable(output file name): "gcc filename.c –o filename"
   -> -o option is used to specify the output file name, if you do not use this option, then an
      output file with the name a.out is generated.
2. Run the executable: "./filename"
*/

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 
   °C = (5/9) (°F−32)
*/

int main()
{
    // integer version
    /*
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  // lower limit of temperature table
    upper = 200;  // upper limit
    step = 20;  // step size

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;  // integer division, cannot do 5/9 first b/c that would result in 0 * (fahr-32)
        printf("Fahrenheit: %6d\tCelsius: %6d\n", fahr, celsius);
        fahr = fahr + step;   
    }
    */

    // floating point version
    /*
    double fahr, celsius;
    double lower, upper, step;

    lower = 0;  // lower limit of temperature table
    upper = 200;  // upper limit
    step = 20;  // step size

    printf("Fahrenheit to Celsius Conversion\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("Fahrenheit: %6.1f\tCelsius: %6.1f\n", fahr, celsius);  // %6.1f, prints as floating point with at least 6 wide and 2 after decimal point
        fahr = fahr + step;   
    }

    printf("\nCelsius to Fahrenheit Conversion\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * (celsius + 32.0);
        printf("Celsius: %6.1f\tFahrenheit: %6.1f\n", celsius, fahr);  // %6.1f, prints as floating point with at least 6 wide and 2 after decimal point
        celsius = celsius + step;   
    }
    */
    
    // Symbolic constants
    #define LOWER 0 // lower limit of table
    #define UPPER 300 // uppper limit of table
    #define STEP 20 // step size

    for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\n\n");

    for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}