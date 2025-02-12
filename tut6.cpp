// There are two types of header files:
// 1=System header file :
// It comes with the compiler
#include <iostream>
// 2=User defined header file:
// It is written by the programer
// #include"this.h"--> This will produce an error if 'this.h'
// is no present in the current directory

using namespace std;
int main()
{
    cout << "Operators in C++" << endl;
    cout << "Following are the types of operators " << endl;
    // Arithmetic operator
    cout << "The value of a + b is " << (a + b) << endl;
    cout << "The value of a - b is " << (a - b) << endl;
    cout << "The value of a * b is " << (a * b) << endl;
    cout << "The value of a / b is " << (a / b) << endl;
    cout << "The value of a % b is " << (a % b) << endl;
    
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    return 0;
}
    