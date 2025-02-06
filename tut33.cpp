#include <iostream>

using namespace std;

class bankdopsit {
private:
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    bankdopsit();  // Default constructor
    bankdopsit(int p, int y, float r);  // Constructor with float rate
    bankdopsit(int p, int y, int r);    // Constructor with int rate
    void show();
};

// Default constructor
bankdopsit::bankdopsit() {
    principal = 0;
    year = 0;
    interestRate = 0.0;
    returnValue = 0.0;
}

// Constructor with float rate (e.g., 0.04 for 4%)
bankdopsit::bankdopsit(int p, int y, float r) {
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;

    // Compound interest calculation
    for (int i = 0; i < y; i++) {
        returnValue *= (1 + interestRate);
    }
}

// Constructor with int rate (e.g., 14 for 14%)
bankdopsit::bankdopsit(int p, int y, int r) {
    principal = p;
    year = y;
    interestRate = float(r) / 100;  // Convert the rate to a decimal
    returnValue = principal;

    // Compound interest calculation
    for (int i = 0; i < y; i++) {
        returnValue *= (1 + interestRate);
    }
}

// Show method to display principal and return value
void bankdopsit::show() {
    cout << "Principal amount was: " << principal << endl
         << "Return value after " << year << " years is: " << returnValue << endl;
}

int main() {
    bankdopsit bd1, bd2, bd3;
    int p, y, R;
    float r;

    // Input for float interest rate
    cout << "Enter the value of p, y and r (float rate)" << endl;
    cin >> p >> y >> r;
    bd1 = bankdopsit(p, y, r);
    bd1.show();

    // Input for integer interest rate
    cout << "Enter the value of p, y and R (integer rate)" << endl;
    cin >> p >> y >> R;
    bd2 = bankdopsit(p, y, R);
    bd2.show();

    return 0;
}
























/*#include <iostream>

using namespace std;
class bankdopsit
{
private:
    int principal;
    int year;
    float interesRate;
    float returnValue;

public:
    bankdopsit();
    bankdopsit(int p, int y, float r); // r can be a value like 0.04
    bankdopsit(int p, int y, int r);   // r can be a value like 14
    void show();
};

bankdopsit::bankdopsit(int p, int y, float r)
{
    principal = p;
    year = y;
    interesRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

bankdopsit::bankdopsit(int p, int y, int r)
{
    principal = p;
    year = y;
    interesRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

void bankdopsit::show()
{
    cout << "Principal amount was" << principal << endl
         << "Return value after" << year
         << "years is" << returnValue << endl;
}

int main()
{
    bankdopsit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdopsit(p, y, r);
    bd1.show();


    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    bd1 = bankdopsit(p, y, R);
    bd1.show();
    return 0;
}
*/