
#ifndef HW09EC_SHAPE_H
#define HW09EC_SHAPE_H


#include <iostream>
#include <math.h>
using namespace std;

class Shape{
public:

/********************************************************************
 * Method CalcPerimeter: class Shape
 * ------------------------------------------------------------------
 * This method calculates the perimeter of a shape
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing shape with known sides
 *
 * POST-CONDITIONS
 * returned perimeter of shape
 ********************************************************************/
    int virtual CalcPerimeter() const = 0;


/********************************************************************
 * Method CalcArea: class Shape
 * ------------------------------------------------------------------
 * This method calculates the area of a shape
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing shape with known sides
 *
 * POST-CONDITIONS
 * returned area of shape
 ********************************************************************/
    float virtual CalcArea() const = 0;


    // friend function to print the perimeter of the shape in a sentence
    friend void PrintPerimeter(const Shape& x)
    {
        cout << "The perimeter of the shape is " << x.CalcPerimeter() << endl;
    }
    // friend function to print the area of the shape in a sentence
    friend void PrintArea(const Shape& x)
    {
        cout << "The area of the shape is " << x.CalcArea() << endl;
    }
};

class Rectangle : public Shape{
private:
    int l; // length
    int w; // width
public:
/********************************************************************
 * Default Constructor Rectangle: class Rectangle
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Rectangle object
 ********************************************************************/
    Rectangle(int l, int w);

    int CalcPerimeter() const;
    float CalcArea() const;

};

class Triangle : public Shape{
private:
    int side1;
    int side2;
    int side3;
public:
/********************************************************************
 * Default Constructor Triangle: class Triangle
 * ------------------------------------------------------------------
 * This creates a default instance of the class
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * <none>
 *
 * POST-CONDITIONS
 * this function creates a Triangle object
 ********************************************************************/
    Triangle (int side1, int side2, int side3);

    int CalcPerimeter() const;
    float CalcArea() const;
};


#endif //HW09EC_SHAPE_H
