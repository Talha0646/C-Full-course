#include <iostream>

using namespace std;
class number
{
private:
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    /*
    When no copy constructor is found, complier
    supplies its own copy constructor
    */
    number(number &obj)
    {
        cout << "Copy constructor call " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is" << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    number z3 = z; // Copy constructor called
    z3.display();
    // z1 should exactly resemble z or x or y
    return 0;
}