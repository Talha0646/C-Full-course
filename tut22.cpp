/* OOPs --> Classes and Objects
 C++ --> Initially called --> C with classes by stroustroup
 Class --> Extension of structures (in C)
 Structures had limitations
            - No methods
            - Members are public
 Classes --> Structures + More
 Classes --> Can have methods and properties
 Classes --> Can make few members as private & public
 Structures in C++ are typedefed
 You can declare objects along with the class declarion like this
 harry.salary = 8 make no sense if salary is private*/
/* class Employee(){
   class definition;
}
harry,rohan,lovish;*/

// Nesting of member functions
#include <iostream>
#include <string>

using namespace std;
class binary
{
private:    
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl; 
            exit(0);
        }
    }
    
}

void binary::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
       if(s.at(i)=='0')
       {
          s.at(i)='1';
       }  
       else 
        {
          s.at(i)='0';
       }
    }   
}  

void binary::display(void)
{
    cout<<"Display your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }   
    cout<<endl;
}  

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}