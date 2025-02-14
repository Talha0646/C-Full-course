#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
        1=SimpleCalcutor:
                        Take input of 2 numbers using a utility function and perfoms
                         +,-,*,/ and display the results using another function.
        2=ScientificCalculator:
                        Take input of 2 numbers using a utility function and perfoms
                        any four scientific operation of your chioice and display the
                        results using another function.

Create another class HybridCalculator and inherit it using this 2 classes
Question 1=What type of inheritance are you using? ---> Multiple Inheritance
Question 2=Which mood of inheritance are you usiing? ---> public SimpleCalculator, public ScientificCalculator
Question 3=Create an object of HybridCalculator and display reuslts of simple and
Scientific Calculator? ---> Program neachy likh diya ha 
Question 4=How is code reusability implemented? 
*/

class SimpleCalculator
{
private:
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperatorsSimple()
    {
        cout << "The value of a + b is " << (a + b) << endl;
        cout << "The value of a - b is " << (a - b) << endl;
        cout << "The value of a * b is " << (a * b) << endl;
        cout << "The value of a / b is " << (a / b) << endl;
    }
};

class ScientificCalculator
{
private:
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void performOperatorsScientific()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main()
{
    /* SimpleCalculator calc;
    ScientificCalculator calc;
    calc.getData();
    calc.performOperators();
    */
    
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperatorsScientific();
    calc.getDataSimple();
    calc.performOperatorsSimple();
    return 0;
}