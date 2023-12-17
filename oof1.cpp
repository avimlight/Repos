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
    void gh();
    void rh();
};
void Student ::gh()
{
    cout << "this is the implementation for scope resolution operator" << endl;
}
void Student::rh()
{
    cout << "what to say man u came to see what i wrote" << endl;
}
int main()
{
    Student s1, s2;
    s1.rollno = 55;
    s1.f();
    s2.rollno = 78;
    s2.f();
    s2.gh();
    s2.rh();

    return 0;
}