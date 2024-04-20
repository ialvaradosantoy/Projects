// Chapter 2, exercise 3
// This program describes how to get from the front door of my apartment to 
// to the door of my classroom.

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main
{ 
    cout<<"Stand up from your seat.\n";    // output
    cout<<"Walk to the front door without bumping into anything.\n";    // output
    cout<<"Open front door and walk out of the apartment.\n";    // output
    // TODO
    cout<<"Without bumping into anything, walk to the bus stop.\n";            // output 
    cout<<"Wait for the cyride.  \n";            // output 
    cout<<"When Cyride arrives, take out ID and show to bus driver.\n";            // output
    cout<<"Get on Cyride and sit down in an open seat,\n";            // output  
    cout<<"or stand up if there aren't any open seats.\n";            // output
    cout<<"Get off the Cyride once you are on campus.\n";            // output 
    cout<<"Walk to Carver Hall and find first class room.\n";            // output  
    keep_window_open();              //  wait for a character to be entered
    return 0;
}