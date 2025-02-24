#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Writing to file
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me\n";
    out << "This is also me\n"; // Fixed typo: "alsi" → "also"
    out.close();

    // Reading from file
    ifstream in;
    string st;
    in.open("sample60.txt");

    while (getline(in, st))  
    {
        cout << st << endl;
    }

    in.close();
    return 0;
}
