// Chapter 3 exercise 9
// Program converts input string representing integer values
// to integer values

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    string val1 {" "};  
    char command {' '};                   

    cout << "Enter x to run program: ";                                  // propmt user for input
    cin >> command;                                                      // read and store input
    while (command == 'x')
    {   
        cout << "Enter a string value.\n";                               // propmt user for input
        cin >> val1;                                                     // read and store input

        if (val1 == "zero")                                             // Check if value is valid
        {
            cout << "Value is: 0\n";                                  
        }
        else if (val1 == "one")                                             // Check if value is valid
        {
            cout << "Value is: 1\n";                                  
        }
        else if (val1 == "two")                                             // Check if value is valid
        {
            cout << "Value is: 2\n";                                  
        }
        else if (val1 == "three")                                             // Check if value is valid
        {
            cout << "Value is: 3\n";                                  
        }
        else if (val1 == "four")                                             // Check if value is valid
        {
            cout << "Value is: 4\n";                                  
        }
        else{
            cout << "Not a number I know.\n";             
        }

        cout << "Enter x to run program: ";                              // propmt user for input
        cin >> command;                                                  // read and store input
    }

    return 0;
}