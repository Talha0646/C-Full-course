#include <iostream>

using namespace std;
/*
Case 1:
class B: public A{
        first A() then B() ---> Order of excution of constructor
};

Case 2:
class A: public B, public C{
        B() then C() and A() ---> Order of execution of constructor
};

Case 3:
class A: public B, virtual public C{
        C() then B() and A()
};
*/

class Base1
{
private:
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "The value of data1 is" << data1 << endl;
    }
};

class Base2
{
private:
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "The value of data2 is" << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
private:
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is" << derived1 << endl;
        cout << "The value of derived2 is" << derived2 << endl;
    }
};

int main()
{
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();

    return 0;
}