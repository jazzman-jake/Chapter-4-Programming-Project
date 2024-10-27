//Terrence Williamson
//10.26.24
//Chapter 4 Programming Project
//Geometry-Calculator

#include <iostream>
using namespace std;
int menu; //determines which case is chosen in menu,
double area, length, width, radius, height; //initializing all input variables here
bool quit = false; //sets a value in order to get validated input in do..while loop

int main()
{
    do {
        cout << "Geometry Calculator\n__________________________________\n\n"
            "1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n"
            "3. Calculate the Area of a Triangle\n4. Quit\nEnter your choice(1-4): ";
        cin >> menu; //gets the user's choice of option previously displayed
        switch (menu) {
        case 1: //area of a circle
            cout << "Enter the circle's radius: ", cin >> radius;
            while (radius < 0) {
                cout << "Error. Cannot enter negative number for radius.\n";
                cout << "What is the correct radius? ", cin >> radius;
            }
            area = 3.14159 * pow(radius, 2);
            cout << "The area of the circle is " << area << endl << endl;
            break;
        case 2: //area of a rectangle
            cout << "Enter the rectangle's length and width (Separate with a space, in that order): ";
            cin >> length >> width;
            while (length < 0 || width < 0) {
                cout << "Error. Cannot enter negative number for length or width.\n";
                cout << "What is the correct length and width? ", cin >> length >> width;
            }
            area = length * width;
            cout << "The area of the rectangle is " << area << endl << endl;
            break;
        case 3: //area of a triangle
            cout << "Enter the triangle's height and base length (Separate with a space, in that order): ";
            cin >> height >> length;
            while (height < 0 || length < 0) {
                cout << "Error. Cannot enter negative number for height or length.\n";
                cout << "What is the correct height or length? ", cin >> height >> length;
            }
            area = height * length * 0.5;
            cout << "The area of the triangle is " << area << endl << endl;
            break;
        case 4: //end program
            quit = true;
            break;
        default:
            cout << "Invalid entry. Please choose 1-4 from the menu: \n\n";
            break;
        }
    } while (!quit);
    
}
