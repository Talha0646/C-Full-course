#include<iostream>

using namespace std;
int main(){
     /*Loop in C++:
    There are three types of loop in C++
    1=For loop 
    2=While loop 
    3=Do-While loop
    */

   /*For loop in C++*/
   int i=1;
   cout<<i<<endl;
      i++;

   // Syntax for for loop
   for(initialization; codition; updation)
   {
    loop body(C++ code);
   }
    
   for (int i = 0; i <= 40; i++)
   {
     /* code */
    cout<<i<<endl;
   }
   
   // Example of infinite for loop
   for (int i = 0; 34 <= 40; i++)
   {
    /* code */
    cout<<i<<endl;
   }

   /*While loop in C++*/
   Syntax:
   while (codition)  
   {
   C++ statement;
   }

   // Printing 1 to 40 using while loop
      int i=1;
      while (i<=40)
      {
       cout<<i<<endl;
       i++;
      }
   
   // Example of infinite while loop
      int i=1;
      while (true)
      {
       cout<<i<<endl; 
       i++;
      }

   /* Do-While loop in C++*/ 
      Syntax:
      do-while
      {
        C++ statement;
      } while (condition)

 // Printing 1 to 40 using while loop
      int i=1;
    do-while
      {
       cout<<i<<endl;
       i++;
      } while(false);
     return 0;
  }