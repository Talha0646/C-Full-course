#include <iostream>

using namespace std;
int main (){
    // cout<<"This is tutorial 9"
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // selection control structure:If-else-if-eles ladder
    // if((age<18)&(age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age=18){
    //     cout<<"You are a kid amd you will grt a kid pass to the party"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // selection control structure: Switch Case Statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;

         case 22:
        cout<<"You are 22"<<endl;
        break;
    
     case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
    cout<<"No special cases"<<endl;
        break;
    }
 
    cout<<"Done with switch case";
    return 0;
} 