#include <iostream>

using namespace std;

class BaseClass {
public:
    int var_base;                
    BaseClass(int val = 1) : var_base(val) {} // Initialize var_base with 1

    virtual void display() { // Virtual function for polymorphism
        cout << "1 Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived;                  
    DerivedClass(int baseVal = 1, int derivedVal = 2) 
        : BaseClass(baseVal), var_derived(derivedVal) {} // Initialize both variables

    void display() override { // Override
        cout << "2 Displaying Base class variable var_base: " << var_base << endl;
        cout << "2 Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main() {
    BaseClass *base_class_pointer;
    BaseClass obj_base(1); // Initialize BaseClass object with var_base = 1
    DerivedClass obj_derived(1, 2); // Initialize DerivedClass with var_base = 1, var_derived = 2

    // First call BaseClass display() directly
    cout << "Calling BaseClass display(): " << endl;
    obj_base.display(); 

    // Then call DerivedClass display() using BaseClass pointer
    cout << "\nCalling DerivedClass display() using BaseClass pointer: " << endl;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); 

    return 0;
}
