#include <iostream>

using namespace std;

class Box
{
public:
    double getVolume(void)
    {
        return length * breadth * height;
    }

    double getLength()
    {
        return length;
    }
    void setLength(double len)
    {
        length = len;
    }

    double getBreadth()
    {
        return breadth;
    }
    void setBreadth(double bre)
    {
        breadth = bre;
    }

    double getHeight()
    {
        return height;
    }
    void setHeight(double hei)
    {
        height = hei;
    }

    Box operator+(const Box& b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

    Box operator-(const Box& b)
    {
        Box box;
        box.length = this->length - b.length;
        box.breadth = this->breadth - b.breadth;
        box.height = this->height - b.height;
        return box;
    }

private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box box1;
    Box box2;
    Box box3;
    Box box4;
    double volume = 0.0;

    //box1 spec
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    //box2 spec
    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);

    cout << "Box length: " << box1.getLength() << endl << "Box breadth: " << box1.getBreadth() << endl << "Box height: " << box1.getHeight() << endl << endl;
    volume = box1.getVolume();
    cout << "box1 volume: " << volume << endl << endl;

    cout << "Box length: " << box2.getLength() << endl << "Box breadth: " << box2.getBreadth() << endl << "Box height: " << box2.getHeight() << endl << endl;
    volume = box2.getVolume();
    cout << "box2 volume: " << volume << endl;

    box3 = box1 + box2;

    cout << "Box length: " << box3.getLength() << endl << "Box breadth: " << box3.getBreadth() << endl << "Box height: " << box3.getHeight() << endl << endl;
    volume = box3.getVolume();
    cout << "box3 volume: " << volume << endl << endl;

    box4 = box2 - box1;

    cout << "Box length: " << box4.getLength() << endl << "Box breadth: " << box4.getBreadth() << endl << "Box height: " << box4.getHeight() << endl << endl;
    volume = box4.getVolume();
    cout << "box4 volume: " << volume << endl << endl;

    cout << "Hey beautiful, love ya!" << endl;
    return 0;
}
