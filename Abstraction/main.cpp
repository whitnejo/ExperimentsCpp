#include <iostream>

using namespace std;

class Adder{
public:
    //constructor
    Adder(int i = 0)
    {
        total = i;
    }
    //interface to outside world
    void addNum(int number)
    {
        total += number;
    }
    //interface to outside world
    int getTotal()
    {
        return total;
    }
protected:
    //hidden data from outside world
    int total;
};

class Subtractor: public Adder{
public:
    Subtractor(int i=0)
    {
        total = i;
    }

    void subNum(int number)
    {
        total -= number;
    }

};

class Calc: public Subtractor{
public:
    Calc(int i=0)
    {
        total = i;
    }
};

int main()
{
    Adder a;
    Calc c;

    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    c.addNum(10);
    c.addNum(13);
    c.subNum(2);

    cout << "Total " << a.getTotal() << endl;
    cout << "Total " << c.getTotal() << endl;
    cout << "Hey Beautiful, love ya!" << endl;
    return 0;
}
