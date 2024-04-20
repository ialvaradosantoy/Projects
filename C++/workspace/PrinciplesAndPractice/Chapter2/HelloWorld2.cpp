// Chapter 2, exercise 1
// This program outputs a message to the monitor

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main
{ 
    cout<<"Hello, programming!\n";    // output "Hello, programming!"
    cout<<"Here we go!\n";            // output "Here we go!"
    keep_window_open();              //  wait for a character to be entered
    return 0;
}