// This program reads a string from input and outputs
// it to the console

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    // Common variable types, variable definitions and value declarations
    int number_of_steps = 39;                                           // int for integers
    double flying_time = 3.5;                                           // double for floating-point numbers
    char decimal_point = '.';                                           // char for individual characters
    string name = "Annemarie";                                          // string for character strings
    bool tap_on = true;                                                 // bool for logical variables

    cout<<"Please enter your first name and age:\n";      // Prompt the reader for input 
    string first_name;                                                  // first_name is a variable of type string
    double age = 0;                                                     // age is a variable of type double
    cin>>first_name;                                                    // read characters into first_name with standard input stream
                                                                        // and get from operator >>
    cin>>age;                                                           // read double value into age, value is in years        
    cout<<"Hello, "<<first_name<<" (age "<<(age * 12)<<" months)\n";                  // output message, first_name, and age (in months) to the console

    return 0;
}