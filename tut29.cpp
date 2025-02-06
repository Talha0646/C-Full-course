#include <iostream>

using namespace std;
class Complex
{
private:
    int a, b;

public:
    /* 1= Creating a constructor
       2=Constructor is a special member function with the same
       name as of the calss
       3=It is used to initializ the objects of its class
       4=It is automaticallly invoked whenever an object is creat
       */
    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is" << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(void) //-->This is a default constructor as it take no parameters
{
    a = 10;
    b = 25;
}
int main()
{
    Complex c1, c2, c3; 
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/* Properties of constructor
1= It can have default arguments
2= We cannot refer to their address
3= They cannot return values and do not have return types
4= It should be declared in the public section of the class
5= They are automatically invoked whenever the object is created 
*/
