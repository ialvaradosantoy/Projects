// Chapter 3 exercise 2
// Converting input of miles to kilometers

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    
    double num_miles {0};  
    double m_to_k_conversion {1.609};                    
    cout << "Enter number of miles to convert to kilometers.\n";      // propmt user for input
    cin >> num_miles;                                                 // read and store input
    cout << num_miles << " miles is "                                  // output conversion
         << (num_miles * m_to_k_conversion) 
         << " kilometers.\n";                          
    
    
    return 0;
}