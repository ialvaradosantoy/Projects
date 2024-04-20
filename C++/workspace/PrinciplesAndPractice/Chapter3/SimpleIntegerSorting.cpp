// Chapter 3 exercise 6
// Sort 3 integer values to find the numerical sequeunce 
// in increasing order seperated by commas
// ex: 10 4 6 -> 4, 6, 10

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    int val1 {0};  
    int val2 {0}; 
    int val3 {0};
    char command {' '};                   

    cout << "Enter x to run program: ";                                  // propmt user for input
    cin >> command;                                                      // read and store input
    while (command == 'x')
    {   
        cout << "Enter three integer values.\n";                          // propmt user for input
        cin >> val1;                                                      // read and store input
        cin >> val2;
        cin >> val3;

        if ( val1 <= val2 && val1 <= val3)
        {
            cout << val1 << ", ";
            if (val2 <= val3)
            {
                cout << val2 << ", "; 
                cout << val3 << "\n";
            }
            else 
            {
                cout << val3 << ", "; 
                cout << val2 << "\n"; 
            }
        }
        else if ( val2 <= val1 && val2 <= val3)
        {
            cout << val2 << ", ";
            if (val1 <= val3)
            {
                cout << val1 << ", "; 
                cout << val3 << "\n";
            }
            else 
            {
                cout << val3 << ", "; 
                cout << val1 << "\n"; 
            }
        }
        else 
        {
            cout << val3 << ", ";
            if (val1 <= val2)
            {
                cout << val1 << ", "; 
                cout << val2 << "\n";
            }
            else 
            {
                cout << val2 << ", "; 
                cout << val1 << "\n"; 
            }
        }

        cout << "Enter x to run program: ";                                  // propmt user for input
        cin >> command;                                                      // read and store input
    }

    return 0;
}