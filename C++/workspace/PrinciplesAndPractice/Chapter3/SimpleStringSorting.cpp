// Chapter 3 exercise 7
// Sort 3 strings to find the sequeunce 
// in increasing order seperated by commas
// ex: Steinbeck Hemingway Fitzgerald -> Fitzgerald, Hemingway, Steinbeck

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    string word1 {" "};  
    string word2 {" "};
    string word3 {" "};
    char command {' '};                   

    cout << "Enter x to run program: ";                                  // propmt user for input
    cin >> command;                                                      // read and store input
    while (command == 'x')
    {   
        cout << "Enter three strings.\n";                                 // propmt user for input
        cin >> word1;                                                      // read and store input
        cin >> word2;
        cin >> word3;

        if ( word1 <= word2 && word1 <= word3)
        {
            cout << word1 << ", ";
            if (word2 <= word3)
            {
                cout << word2 << ", "; 
                cout << word3 << "\n";
            }
            else 
            {
                cout << word3 << ", "; 
                cout << word2 << "\n"; 
            }
        }
        else if ( word2 <= word1 && word2 <= word3)
        {
            cout << word2 << ", ";
            if (word1 <= word3)
            {
                cout << word1 << ", "; 
                cout << word3 << "\n";
            }
            else 
            {
                cout << word3 << ", "; 
                cout << word1 << "\n"; 
            }
        }
        else 
        {
            cout << word3 << ", ";
            if (word1 <= word2)
            {
                cout << word1 << ", "; 
                cout << word2 << "\n";
            }
            else 
            {
                cout << word2 << ", "; 
                cout << word1 << "\n"; 
            }
        }

        cout << "Enter x to run program: ";                                  // propmt user for input
        cin >> command;                                                      // read and store input
    }

    return 0;
}