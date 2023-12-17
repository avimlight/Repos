#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;

    void f()
    {
        cout << "this is the way" << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.rollno = 55;
    s1.f();
    s2.rollno = 78;
    s2.f();

    return 0;
}