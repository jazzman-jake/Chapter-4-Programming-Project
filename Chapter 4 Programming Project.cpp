//Terrence Williamson
//10.23.24
//Chapter 4 Programming Project
//Shipping-Charges

#include <iostream>
#include <iomanip>
using namespace std;
const int min_w = 0, max_w = 20, min_d = 10, max_d = 3'000;
float weight, miles, cost; //cost reflects for every interval of 500 miles distance
int mult; //used in program to show many times 500 can go into miles input to
          //determine cost
char restart;
int main()
{
    do
    {
        cout << "Thank you for choosing The Fast Freight Shipping Company. "
            "Please tell us the weight of your package and how far it must be shipped. "
            "Please note, weight must be between 0.01kg and 20kg and distance must be between "
            "10 miles and 3,000 miles.\n";
        cout << "Weight (kg): ", cin >> weight;
        cout << "Distance (mi): ", cin >> miles;
        mult = miles / 500;
        restart = 'n'; //default catch to stop loop in case user enters correct info
        if ((weight <= min_w || weight > max_w) || (miles < min_d || miles > max_d))
        {
            cout << "Error. Please enter a valid weight (0.01-20kg) and/or distance (10-3,000 miles)."
                "\nTry again? Y/N     "; //input validation in case of numbers out of range
            cin >> restart;
        }
        
        else if (miles < 500)
            cout << "Your order qualifies for free shipping! You have $0 in shipping fees.\n";
        else if (weight <= 2)
        {
            cost = mult * 1.10;
            cout << "You must pay $" << setprecision(2) << fixed << cost << " in shipping fees.\n";
        }
        else if (weight <= 6)
        {
            cost = mult * 2.20;
            cout << "You must pay $" << setprecision(2) << fixed << cost << " in shipping fees.\n";
        }
        else if (weight <= 10)
        {
            cost = mult * 3.70;
            cout << "You must pay $" << setprecision(2) << fixed << cost << " in shipping fees.\n";
        }
        else if (weight <= 20)
        {
            cost = mult * 4.80;
            cout << "You must pay $" << setprecision(2) << fixed << cost << " in shipping fees.\n";
        }
    } while (restart == 'Y' || restart == 'y');

}