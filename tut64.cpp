#include <iostream>

using namespace std;
template <class T>
class vector
{
private:
    T *arr;
    int size;

public:
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    void setValues(int index, T value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; 
        }
        return d;
    }

    ~vector() {
        delete[] arr;
    }
};

int main()
{
    // vector v1(3);
    // v1.setValues(0, 4);
    // v1.setValues(1, 3);
    // v1.setValues(2, 1);

    // vector v2(3);
    // v2.setValues(0, 1);
    // v2.setValues(1, 0);
    // v2.setValues(2, 1);

    // int a = v1.dotProduct(v2);
    // cout << "Dot Product: " << a << endl;

    
    vector <float>v1(3);
    v1.setValues(0, 1.4);
    v1.setValues(1, 3.3);
    v1.setValues(2, 0.1);

    vector <float>v2(3);
    v2.setValues(0, 0.1);
    v2.setValues(1, 1.90);
    v2.setValues(2, 4.1);

    float a = v1.dotProduct(v2);
    cout << "Dot Product: " << a << endl;

    return 0;
}
