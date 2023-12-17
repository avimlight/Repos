#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    Student()
    {

        cout << "it is executed without calling so called as the constructo" << endl;
    }

    void f()
    {
        cout << "this is the way" << rollno << endl;
        cout << "the name is" << name << endl;
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
    Student s1;
    // Student s1, s2;
    // s1.rollno = 55;
    // s1.name = "sumith";
    // s1.f();
    // s2.rollno = 78;
    // s2.f();
    // s2.gh();
    // s2.rh();
    // Student *s3;
    // s3->rollno = 23;
    // s3->f();
    // cout << "the value is f" << s3->rollno << endl;

    return 0;
}