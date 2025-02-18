#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;                // Declare variable
    BaseClass() : var_base(0) {} // Initialize variable in constructor

    virtual void display() // Virtual function for polymorphism
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{ // Fixed typo: BaseClase → BaseClass
public:
    int var_derived;                   // Declare variable
    DerivedClass() : var_derived(0) {} // Initialize variable in constructor

    void display() override // Override correctly
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
        cout << "Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // Pointer to BaseClass
    BaseClass obj_base;
    DerivedClass obj_derived; // Object of DerivedClass

    base_class_pointer = &obj_derived; // Assign derived object to base pointer

    base_class_pointer->var_base = 34;
    base_class_pointer->display(); // Calls DerivedClass's display() due to polymorphism

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    base_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
