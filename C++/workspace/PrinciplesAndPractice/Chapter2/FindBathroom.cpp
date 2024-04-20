// Chapter 2, exercise 2
// This program lists instructions for for a computer to find the
// upstairs bathroom.

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main
{ 
    cout<<"Stand up from your seat.\n";    // output
    cout<<"Without bumping into anything, walk to the corridor.\n";            // output 
    cout<<"Once you reach the corridor, turn the lights on by  \n";            // output 
    cout<<"flipping the light switch up on your right hand side.\n";            // output
    cout<<"Walk straight, and open the door to the bathroom.\n";            // output  
    cout<<"Turn the lights on with the switch next to the mirror\n";            // output
    cout<<"by flipping it up.\n";            // output  
    keep_window_open();              //  wait for a character to be entered
    return 0;
}