// This program is an exercise for "narrowing"
// conversions 

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    int userNum = 0;
    cout << "Please choose the program version to run\n";
    cout << "With narrowing conversions (1)\n";
    cout << "Without narrowing conversions (2)\n";
    cout << "Enter program version: ";
    cin >> userNum;
    if (userNum == 1)
    {
        double d = 0;
        while (cin>> d)                        // repeat the statements below
        {                                      // as long as we type in numbers
            int i =d;                          // try to squeeze a double int an int
            char c = i;                        // try to squeeze an int into a char
            int i2 = c;                        // get the integer value of the character
            cout << "d == " << d               // the original double
                << " i == " << i               // converted to int
                << " i2 == " << i2             // int value of char
                << " char(" << c << ")\n";     // the char
        }
    }
    else if (userNum == 2) 
    {
        // Initializations implemented with {}-list based notation
        // known as universal and uniform initialization.
        // Purpose of this notation is to outlaw narrowing conversions
        // Compiler can check initialized literal values
        double d {2.7};                    // OK

        int i {d};                         // error: double -> int might narrow
        int a {1000};                      // OK
        char c {a};                        // error: int -> char might narrow
        cout << "d == " << d               // the original double
            << " i == " << i               // converted to int
            << " a == " << a               // int value
            << " char(" << c << ")\n";     // the char
    }
    else 
    {
        cout << "Invalid option, goodbye!\n";
    }

    return 0;
}