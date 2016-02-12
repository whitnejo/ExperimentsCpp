#include <iostream>

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
    int area()
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};

class Rectangle: public Shape{
public:
    Rectangle(int w=0, int h=0):Shape(w, h){}
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return(width * height);
    }
};

class Triangle: public Shape{
public:
    Triangle( int w=0, int h=0):Shape(w,h){}
    int area()
    {
        cout << "Triangle class area :" <<endl;
        return(width * height / 2);
    }
};

// Main function for program
int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    //store the address of Rectangle
    shape = &rec;
    //call rectangle area
    shape->area();

    //store the address of triangle
    shape = &tri;
    //call triangle area
    shape->area();

    cout << "Hey Beautiful, love ya!" << endl;
    return 0;
}
