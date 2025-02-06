#include<iostream>

using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}         

// This will not swap a and b
void swap(int a, int b){   //temp a  b 
    int temp =a;           //4    4  5
    a =b;                  //4    5  5
    b =temp;               //4    5  4
}

// Call by reference using pointer
void swapPointer(int *a, int *b){   //temp a  b 
    int temp = *a;                  //4    4  5
    *a =*b;                         //4    5  5
    *b  =temp;                      //4    5  4
}


// Call by reference using C++ rference variable
// int & swapReferenceVar(int &a, int &b); Value change kr na k liya 
void swapReferenceVar(int &a, int &b){   //temp a  b 
    int temp =a;                         //4    4  5
    a =b;                                //4    5  5
    b =temp;                             //4    5  4   
    // return a; 
}

int main (){
    int a =4, b =5;
    // cout<<"The sum of 4 and 5 is\n"<<sum(a, b);
    cout<<"The value of a is"<<a<<"and the value of b is "<<b<<endl;
    // swap(a,b); This will not swap a and b
    // swapPointer(&a,&b); This will swap a and b using pointer reference
    // swapReferenceVar(a,b) =766; Values change kr na k liya 
    swapReferenceVar(a,b);  //This will swap a and b using reference variable
    cout<<"The value of a is"<<a<<"and the value of b is "<<b<<endl;
    return 0;
}