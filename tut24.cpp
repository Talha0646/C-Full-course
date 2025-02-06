#include<iostream>

using namespace std;
class Employee
{
    int id;
    static int count;
    
public:
         void setData(void)
         {
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
         }
         void getData(void)
         { 
            cout<<"The id of this employee is"<<id<<"and this is employee number"<<count<<endl;
         }
         static void getcount(void)
         {
            cout<<"The value of count is"<<count<<endl;
         }   
};
// Count is the static data membe of class Employee  
int Employee::count=1000;   //Default value is 0

int main (){
    Employee harry,rohan,lovish;
    // harry.id =1;
    // harry.count=1; Cannot do this as id and count are private 
    harry.setData();
    harry.getData();
    Employee::getcount();

    rohan.setData();
    rohan.getData();
    Employee::getcount();

    lovish.setData();
    lovish.getData();
    Employee::getcount();
    return 0;
}