#include<iostream>

using namespace std;

    // Function prototype
    // Type function-name (arguments)
    // int sum(int a,int b); ---->Accepyable
    // int sum(int a, b);  //Not---.Acceptable
    int sum(int , int); //--->Acceptable
    // void g(void); --->Acceptable
    void g();
int main (){
    int num1,num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    // actual parameters are also called arguments
    cout<<"The sum is"<<sum(num1,num2);
    g();

    return 0;
}

int sum(int a,int b){
    // formal parameters a and b will be aking values from
    // actual parameters num1 and num2
    int c=a+b;

    return c;

}

void g(){
    cout<<"\nHello Good MOrning";
    // \n new line per jana k liya 
}