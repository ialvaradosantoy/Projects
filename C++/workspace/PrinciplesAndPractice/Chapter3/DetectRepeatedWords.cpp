// This program is an exercise detecting if read in words are
// repeated

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    int number_of_words = 0;
    string previous = " ";                              // previous word initialized to "not a word"
    string current;                                     // current word
    cout << "Please enter a word\n";                    // propmt user for input
    cin >> current;                                     // read string
    while (current != "1")
    {
         ++number_of_words;
         if (previous == current)
         {
            cout<< "word number " << number_of_words 
                << " repeated word: " <<current << "\n";
         }
         previous = current;
         cout << "Please enter a word\n";                    // propmt user for input
         cin >> current;                                     // read string
    }
    
    return 0;
}