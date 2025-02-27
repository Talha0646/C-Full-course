#include <iostream>
#include <map>
#include <string>

using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kozume"s, 169}, {"Kuroo", 187}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<"This size is:"<<marksMap.size()<<endl;
    cout<<"This max size is:"<<marksMap.max_size()<<endl;
    cout<<"This empty's return value is:"<<marksMap.empty()<<endl;
    return 0;
}