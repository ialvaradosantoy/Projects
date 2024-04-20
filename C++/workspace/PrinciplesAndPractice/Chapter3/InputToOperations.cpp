// Chapter 3 exercise 10
// Program converts input strings containing an
// operation followed by two operands. Outputs
// the result.

// ""../../"" tells the compiller that header was placed in the main 
// folder where it can be used by all of your projects.
#include "../../std_lib_facilities.h"
// #include "std_lib_facilities.h"

int main(void) 
{ 
    int num_pennies {0};
    int num_nickels {0};
    int num_dimes {0};
    int num_quarters {0};
    int num_half_dollars {0};
    int num_one_dollars {0};
    int total_cents {0};
    double total_sum {0};
    char command {' '};                   

    cout << "Enter x to run program: ";                                  // propmt user for input
    cin >> command;                                                      // read and store input
    while (command == 'x')
    {   
        cout << "How many pennies do you have? ";                             // propmt user for input
        cin >> num_pennies;                                              // read and store input

        cout << "How many nickels do you have? ";                             // propmt user for input
        cin >> num_nickels;                                              // read and storez input

        cout << "How many dimes do you have? ";                               // propmt user for input
        cin >> num_dimes;                                                // read and store input

        cout << "How many quarters do you have? ";                            // propmt user for input
        cin >> num_quarters;                                             // read and store input

        cout << "How many half dollars coins do you have? ";               // propmt user for input
        cin >> num_half_dollars;                                         // read and store input

        cout << "How many one dollar coins do you have? ";                         // propmt user for input
        cin >> num_one_dollars;                                          // read and store input

        if (num_pennies != 0)                                            // add pennies amount to sum
        {
            total_cents += (num_pennies * 1);
            total_sum += (num_pennies * .01);  

            if (num_pennies == 1)
            {
                cout << "You have 1 penny.\n";
            }
            else
            {
                cout << "You have " << num_pennies << " pennies.\n";
            }                            
        }
        if (num_nickels != 0)                                      // add nickels amount to sum
        {
            total_cents += (num_nickels * 5);
            total_sum += (num_nickels * .05);

            if (num_nickels == 1)
            {
                cout << "You have 1 nickel.\n";
            }
            else
            {
                cout << "You have " << num_nickels << " nickels.\n";
            }                                  
        }
        if (num_dimes != 0)                                       // add dimes amount to sum
        {
            total_cents += (num_dimes * 10);
            total_sum += (num_dimes * .10); 

            if (num_dimes == 1)
            {
                cout << "You have 1 dime.\n";
            }
            else
            {
                cout << "You have " << num_dimes << " dimes.\n";
            }                                
        }
        if (num_quarters != 0)                                       // add quarters amount to sum
        {
            total_cents += (num_quarters * 25);
            total_sum += (num_quarters * .25);

            if (num_quarters == 1)
            {
                cout << "You have 1 quarter.\n";
            }
            else
            {
                cout << "You have " << num_quarters << " quarters.\n";
            }                                 
        }
        if (num_half_dollars != 0)                                       // add quarters amount to sum
        {
            total_cents += (num_half_dollars * 50);
            total_sum += (num_half_dollars * .50);   

            if (num_half_dollars == 1)
            {
                cout << "You have 1 half dollar coin.\n";
            }
            else
            {
                cout << "You have " << num_half_dollars << " half dollars.\n";
            }                            
        }
        if (num_one_dollars != 0)                                       // add quarters amount to sum
        {
            total_cents += (num_one_dollars * 100);
            total_sum += (num_one_dollars * 1.00);

            if (num_one_dollars == 1)
            {
                cout << "You have 1 one dollar coin.\n";
            }
            else
            {
                cout << "You have " << num_one_dollars << " one dollars.\n";
            }                            
        }
        
        cout << "The value of all of your coins is " << total_cents << " cents.\n";
        cout << "The value of all of your coins is $" << total_sum << ".\n";

        // reset totals
        num_pennies = 0;
        num_nickels = 0;
        num_dimes = 0;
        num_quarters = 0;
        num_half_dollars = 0;
        num_one_dollars = 0;
        total_cents = 0;
        total_sum = 0;

        cout << "Enter x to run program: ";                              // propmt user for input
        cin >> command;                                                  // read and store input
    }

    return 0;
}