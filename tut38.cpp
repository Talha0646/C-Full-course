#include <iostream>
using namespace std;

class Base {
private:
    int data1;  // Private member, only accessible within the class
public:
    int data2; 
    void setData() {
        data1 = 10;
        data2 = 20;
    }

    int getData1() {  // Public accessor function
        return data1;
    }
};

class Drived : public Base {  // Corrected class name (was possibly 'Derived' before)
private:
    int data3;
public:
    void process() {
        data3 = data2 * getData1();  // Using getter for private data1
    }

    void display() {
        cout << "Value of data1 is " << getData1() << endl;
        cout << "Value of data2 is " << data2 << endl;
        cout << "Value of data3 is " << data3 << endl;
    }
};

int main() {
    Drived der;  // Object of derived class
    der.setData();  // Set base class data
    der.process();  // Perform calculation
    der.display();  // Show results
    return 0;
}
