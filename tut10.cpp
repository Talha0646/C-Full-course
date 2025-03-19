#include <iostream>

using namespace std;

int main()
{
   /* Loop in C++:
   There are three types of loop in C++
   1 = For loop
   2 = While loop
   3 = Do-While loop
   */

   /* For loop in C++
   int i = 1;
   cout << i << endl;
   i++;
   */

   /* Syntax for for loop
   for(initialization; condition; updation)
   {
      loop body(C++ code);
   }*/

   for (int i = 0; i <= 40; i++)
   {
      cout << i << endl;
   }

   // Example of infinite for loop
   // Corrected the loop condition to be valid
   for (int i = 0; i < 40; i++)  // i < 40 is a valid condition
   {
      cout << i << endl;
   }

   /* While loop in C++
   Syntax:
   while (condition)
   {
      C++ statement;
   }*/

   // Printing 1 to 40 using while loop
   int i = 1;  // Declare i here once at the start
   while (i <= 40)
   {
      cout << i << endl;
      i++;
   }

   // Example of infinite while loop
   int j = 1;  // Resetting i to 1
   while (true)
   {
      cout << j << endl;
      i++;
      // Add a break condition to avoid infinite output
      if (j > 100) {  // Break after 100 iterations to prevent infinite output
         break;
      }
   }

   /* Do-While loop in C++
   Syntax:
   do {
      C++ statement;
   } while (condition);*/

   // Printing 1 to 40 using do-while loop
   i = 1;  // Resetting i to 1
   do {
      cout << i << endl;
      i++;
   } while (i <= 40);  // Corrected do-while syntax

   return 0;
}
