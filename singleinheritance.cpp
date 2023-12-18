#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "thisi s the anminaml class" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        eat();
        cout << "this is called as barking" << endl;
    }
};

int main()
{
    Dog s;
    s.bark();
    return 0;
}