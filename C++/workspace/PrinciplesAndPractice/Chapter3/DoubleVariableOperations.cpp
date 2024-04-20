// Chapter 3 exercise 5
// Operate on 2 double values to find the smaller and larger one,
// sum, difference, product, and ratio

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    double val1 {0};  
    double val2 {0};                    
    cout << "Enter two double values.\n";                            // propmt user for input
    cin >> val1;                                                     // read and store input
    cin >> val2;
    if ( val1 != val2)
    {
        if (val1 < val2)
        {
            cout << "val1 is smaller than val2.\n"; 
        }
        else 
        {
            cout << "val2 is smaller than val1.\n"; 
        }
    }
    
    cout << "Sum of val1 and val2 is: " << (val1 + val2) << ".\n";
    cout << "Difference of val1 and val2 is: " << (val1 - val2) << ".\n";                   
    cout << "Product of val1 and val2 is: " << (val1 * val2) << ".\n";
    cout << "Ratio of val1 and val2 is: " << (val1 / val2) << ".\n";

    return 0;
}