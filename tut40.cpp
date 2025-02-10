#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "Roll Number: " << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "Math: " << math << " Physics: " << physics << endl;
    }
    float get_percentage()
    {
        return (math + physics) / 2;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << get_percentage() << "%" << endl;
    }
};

/*
Notes:
    If we are inheriting B from A and C from B:[A--->B--->C]
 1= A is the base class for B and B is the base class for C
 2=A--->B--->C is called inheritance path
 */
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
}

























// #include <iostream>

// using namespace std;
// class Student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };

// void student::set_roll_number(int r)
// {
//     set_roll_number = r;
// }

// void Student::get_roll_number()
// {
//     cout << "The roll number is" << roll_number << endl;
// }

// class exam : public Student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void set_mark(float, float);
//     void get_marks(void);
// };

// void exam::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }

// void exam::get_marks(float m1, float m2)
// {
//     cout << "The marks obtained in maths are:" << maths << endl;
//     cout << "The marks obtained in physics are:" << physics << endl;
// }

// class Result : public Exam
// {
//     float percentage;

// public:
//     void display()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "Your percentage is" << (math + physics) / 2 << endl;
//     }
// };
// int main()
// {
//     Result harry;
//     harry.set_roll_number(420);
//     harry.set_marks(94.0,90,0);
//     harry.display_results();
//     return 0;
// }
