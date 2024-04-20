// This program reads two strings from input and outputs
// them to the console

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    cout<<"Please enter your first name and last names:\n";             // Prompt the reader for input 
    string first_name;                                                  // first_name is a variable of type string
    string last_name;                                                   // last_name is a variable of type string
    cin>>first_name>>last_name;                                         // read strings into first_name, and last_name 
                                                                        // with standard input stream and operator >> ("get from")
    cout<<"Hello, "<<first_name<<" "<<last_name<<"\n";                  // output message, first_name, and age to the console

    return 0;
}