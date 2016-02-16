#include <iostream>
#include "math.h"

using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int w=0, int h=0)
    {
        width = w;
        height = h;
    }
    virtual int area() = 0;
};

class Rectangle: public Shape{
public:
    Rectangle(int w=0, int h=0):Shape(w, h){}
    int area()
    {
        cout << "Rectangle class area: " << width * height << endl;
        return(width * height);
    }
};

class Triangle: public Shape{
public:
    Triangle( int w=0, int h=0):Shape(w,h){}
    int area()
    {
        cout << "Triangle class area: " << width * height / 2 << endl;
        return(width * height / 2);
    }
};

class Circle: public Shape{
public:
    Circle(int r=0):Shape(r,0){}
    int area()
    {
        cout << "Circle class area: " << M_PI * pow(width, 2) << endl;
        return M_PI * pow(width, 2);
    }
};

// Main function for program
int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);
    Circle cir(10);

    //store the address of Rectangle
    shape = &rec;
    //call rectangle area
    shape->area();

    //store the address of triangle
    shape = &tri;
    //call triangle area
    shape->area();

    //store the address of circle
    shape = &cir;
    //call circle area
    shape->area();

    cout << "Hey Beautiful, love ya!" << endl;
    return 0;
}
