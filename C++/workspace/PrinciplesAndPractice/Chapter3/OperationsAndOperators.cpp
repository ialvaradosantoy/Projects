// This program is an overiview of Operations and operators

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    // Type of variable determines what operations can be applied
    // The compiler knows exactly which operations can be applied 
    // to each variable

    int count;                                           // int for integers
    cin>>count;                                          // >> reads a integer into count  
    string name;                                         // and get from operator >>
    cin>>name;                                           // >> reads a string into name        
    
    int c2 = count + 2;                                 // + adds integers
    string s2 = name + "Jr. ";                          // + appends characters

    int c3 = count -2;                                  // - subtracts integers
    // string s3 = name - "Jr. ";                       // error: - isn't defined for strings
    return 0;
}