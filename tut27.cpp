#include <iostream>

using namespace std;
// For declaration
class complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator::sumRealComplex(complex a, complex b);
    // friend int Calculator::sumCompComplex(complex a, complex b);

    //  Aliter:Declaring the entire calculator class as friend
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your complex number is" << a << "+" << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;                       
    int res = calc.sumRealComplex(o1, o2); // calc shortcut ha calcutor ka
    cout << "The sum or real part of o1 and o2 is" << res << endl; // res shortcut ha result ka

    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum or complex part of o1 and o2 is" << res << endl;
    return 0;
}