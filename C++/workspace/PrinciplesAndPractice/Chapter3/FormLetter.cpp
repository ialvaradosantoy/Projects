// This program is an exercise producing a simple form letter
// based on user input.

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    string first_name {"Katie"};                              
    string friend_name {" "};  
    char friend_sex {0}; 
    int age {0};                               
    cout << "Enter the name of the person you want to write to.\n";      // propmt user for input
    cin >> first_name;                                                  // read string
    cout << "Dear " << first_name << ",\n";                             // greeting
    cout << "\tHow are you? I am fine. I miss you\n";                   // introductory line
    cout << "I miss you too. How is Zuko?\n";
    cout << "Zuko is fine, he is loving the cold weather here.\n";
    cout << "Enter the name of your best friend.\n";                     // propmt user for input
    cin >> friend_name;                                                 // read string
    cout << "Have you seen " << friend_name << " lately?\n";            // greeting
    cout << "Enter an 'm' if friend is male and 'f' for female.\n";      // propmt user for input
    cin >> friend_sex;                                                  // read character
    if (friend_sex == 'm') 
    {
        cout << "If you see " << friend_name << " please ask"
             << " him to call me.\n";
    }
    if (friend_sex == 'f') 
    {
        cout << "If you see " << friend_name << " please ask"
             << " her to call me.\n";
    }
    cout << "Enter " << first_name << "'s age.\n";                      // propmt user for input
    cin >> age;                                                         // read integer
    cout << "I hear you just had a birthday and you are " << age        // message
         << " years old.\n";
    if (age <= 0 || age >= 110)                                         // error handling of age entered
    {
        simple_error("you're kidding!");
    }
    if (age < 12)                                         
    {
         cout << "Next year you will be " << (age + 1) << ".\n";                    
    }
    if (age == 17)                                         
    {
         cout << "Next year you will be able to vote.\n";                    
    }
    if (age > 70)                                         
    {
         cout << "I hope you are enjoying retirement.\n";                    
    }
    cout << "Yours sincerely,\n\nIvan Alvarado-Santoy";
    return 0;
}