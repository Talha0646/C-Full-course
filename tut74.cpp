#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
int main()
{
    /* 
    Function Objects: Another name of function object is "Functor"
                   Function wrapped in a class so that it
                   available like an object()
    */
    int arr[] = {1, 73, 4, 2, 54, 77};
    // sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}