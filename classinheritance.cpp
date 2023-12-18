#include <iostream>
using namespace std;
class Student
{

    int rollno;

    void hel(int r)
    {
        rollno = r;
    }
    void print()
    {
        cout << "the value of the rollno is" << rollno << endl;
    }
};
// encapsulation concept is used here where ur attributes are made privates o that u can access within the class not outside the class then methods such as fn are made ppublic such that from there u can access ur variables and now this phenomennon is called as encapsulation always have to hide the data from the user

int main()
{
    Student s1;
    s1.hel(5);
    s1.print();
    return 0;
}