// Chapter 3 exercise 8
// Determine whether an integer from input is even or odd

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    int val1 {0};  
    char command {' '};                   

    cout << "Enter x to run program: ";                                  // propmt user for input
    cin >> command;                                                      // read and store input
    while (command == 'x')
    {   
        cout << "Enter an integer value.\n";                             // propmt user for input
        cin >> val1;                                                     // read and store input

        if (val1 % 2 == 0)                                               // Check if value is Even
        {
            cout << "The value " << val1
                 << " is even.\n";                                  
        }
        else{
            cout << "The value " << val1
                    << " is odd.\n";             

        }

        cout << "Enter x to run program: ";                              // propmt user for input
        cin >> command;                                                  // read and store input
    }

    return 0;
}