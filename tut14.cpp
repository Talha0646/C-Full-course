#include<iostream>

using namespace std;
struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
      
};

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
      
};

int main (){
     
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    // union money m1,m2;
    // m1.rice=34;
    // m2.car='c';
    // cout<<m1.rice<<endl;
    // cout<<m2.car<<endl;

    // struct employee harry;
    // struct employee shubham;
    // struct employee rohan;
    // harry.eId=1;
    // harry.favchar= 'c';
    // harry.salary=120000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favchar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    return 0;
}