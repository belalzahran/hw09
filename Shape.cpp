/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 7/12/2021
*******************************************************************************/
#include "Shape.h"



// rectangle constructor
Rectangle::Rectangle(int l, int w) : l{l}, w{w}
{ }

// rectangle calc perimeter method
int Rectangle::CalcPerimeter() const
{
    // add up the sides
    return (2*l) +(2*w);

}

float Rectangle::CalcArea() const
{
    // multiply sides
    return l*w;
}





// triangle default constructor
Triangle::Triangle (int side1, int side2, int side3) : side1{side1}, side2{side2}, side3{side3}
{ }

int Triangle::CalcPerimeter() const
{
    return side1+side2+side3;
    // return sides
}

float Triangle::CalcArea() const
{

    // using online method ot calculate the triangle area from sides
    float p = CalcPerimeter()/2;
    return sqrtf( p*(p - side1)*(p - side2)*(p - side3) );
}