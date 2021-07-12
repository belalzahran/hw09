/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 7/12/2021
*******************************************************************************/

#include "Shape.h"

/*******************************************************************************
* hw09 - Abstract Classes and Virtual Functions
*-------------------------------------------------------------------------------
* This program prompts the user for a the side lengths of a triangle and a rectangle
 * and outputs the perimeters as well as the areas of both shapes.
*-------------------------------------------------------------------------------*/
int main ()
{

    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #9        : Abstract Classes and Virtual Functions \n";
    cout << "*****************************************\n\n";


    int length, width;  // IN & CALC - the side lengths of the rectangle
    int side1, side2, side3; // IN & CALC - the side lengths of the triangle


    cout << "Enter the side lengths of the rectangle (Ex: 10 5):";
    cin >> length >> width;

    // initiazling rectangle w side lengths
    Rectangle bobby{length, width};

    // printing results
    PrintArea(bobby);
    PrintPerimeter(bobby);

    cout << "\n\nEnter the side lengths of the Triangle (Ex: 10 5 4):";
    cin >> side1 >> side2 >> side3;

    // initializing triangle with side lengths
    Triangle bob{side1, side2, side3};


    // printing results
    PrintArea(bob);
    PrintPerimeter(bob);







    return 0;
}
