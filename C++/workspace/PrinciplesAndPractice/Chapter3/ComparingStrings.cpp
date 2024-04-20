// This program is an exercise reading and comparing strings

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    cout << "Please enter two names:\n";
    string first;
    string second;
    cin >> first >> second;                 // read two strings
    if (first == second)
    {
        cout<< "that's the same name twice\n";
    }
    if (first < second)
    {
        cout<< first << " is alphabetically before " << second << "\n";        
    }
    if (first > second)
    {
        cout<< first << " is alphabetically after " << second << "\n";        
    }
    
    return 0;
}