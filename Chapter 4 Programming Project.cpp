//Terrence Williamson
//10.22.24
//Chapter 4 Programming Project
//Days-in-a-Month

#include <iostream>
using namespace std;
int month, year, lpyr1, lpyr2, lpyr3;

int main()
{
    do
    {
        cout << "Please enter a month in the range 1-12: ";
        cin >> month;
        cout << "\nPlease enter a year in the format YYYY: ";
        cin >> year;
        lpyr1 = year % 4, lpyr2 = year % 100, lpyr3 = year % 400;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
            || month == 10 || month == 12)
            cout << "\nThere are 31 days in that month." << endl;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            cout << "\nThere are 30 days in that month." << endl;
        else if (month == 2)
            if (lpyr1 != 0 || (lpyr2 == 0 && lpyr3 != 0))
                cout << "There are 28 days in that month.\n";
            else
                cout << "There are 29 days in that month.\n";
        else
            cout << "Invalid input. Month must be between 1-12.";
        
        
    } while (1 <= month <= 12);

    
}
