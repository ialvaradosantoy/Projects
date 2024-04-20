// This program is an exercise using operators

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n== " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == "<< 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << "\n"; // name of newline ("end of line") in output

    cout << "Please enter an integer value: ";
    int x;
    cin >> x;
    cout << "x== " << x
        << "\nx+1 == " << x+1
        << "\nthree times x == "<< 3*x
        << "\ntwice x == " << x+x
        << "\nx squared == " << x*x
        << "\nhalf of x == " << x/2
        << "\nremainder of x modulus 10" << x%10
        << "\nsquare root of x == " << sqrt(x)    // returns a double 
        << "\n"; // name of newline ("end of line") in output
    return 0;
}