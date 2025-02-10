#include<iostream>

using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;
};

/*
For a protected member 
                    | Public Derivation | Private Derivation | Protected Derivation |
1=Public Members    |     Not Inherited |     Not Inherited  |      Not Inherited   |
2=Private Members   |     Protected     |     Private        |      Protected       |
3=Protected Members |     Public        |     Private        |      Protected       |
*/

class Drived : protected Base{
    
};

int main (){
    Base b;
    Drived d;
   // cout<<b.a;  // Will not work since a is protected in both base as well a drived class
    return 0;
}