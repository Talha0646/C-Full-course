#include<iostream>

using namespace std;

inline int product(int a, int b) {
    // Not recommended to use below lines with inline functions
    // static int c = 0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a * b;
}

int moneyReceived(int currentMoney, float factor = 1.04) {
    return currentMoney * factor;
}

// int stringLength(const char *p) {
//     // Function code here
// }

int main() {
    int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is" << product(a, b) << endl;
    
    int money = 100000;
    
    // Fixed the missing quotations in cout
    cout << "If you have " << money << " Rs in your bank account, you will receive " 
         << moneyReceived(money) << " Rs after 1 year" << endl;
    
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " 
         << moneyReceived(money, 1.10) << " Rs after 1 year" << endl;

    return 0;
}
