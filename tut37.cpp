#include <iostream>

using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;

    // Constructor
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Derived class
class Programmer : public Employee
{
public:
    int languageCode;

    // Constructor
    Programmer(int inpId) : Employee(inpId)
    {
        languageCode = 9;
    }

    void getData()
    {
        cout << "Programmer ID: " << id << endl;
        cout << "Language Code: " << languageCode << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << "Harry's salary: " << harry.salary << endl;
    cout << "Rohan's salary: " << rohan.salary << endl;

    Programmer skillF(3);
    skillF.getData(); // Correctly calling getData() to print programmer details

    return 0;
}