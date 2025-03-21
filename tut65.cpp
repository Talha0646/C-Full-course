#include <iostream>

using namespace std;

/*
Class Template With Multiple Parameters(One, Two or Two Then Two ):
template<class T1, class T2......(Comma Separated)>
class nameofClass{
   function  body
}
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl << this->data2;
    }
};

int main()
{
    myClass<char, float> obj('c', 1.8);
    obj.display();
    return 0;
}