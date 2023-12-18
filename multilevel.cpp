#include <iostream>
using namespace std;
class Mamal
{
public:
    void breathe()
    {
        cout << "can breathe" << endl;
    }
};
class Animal : public Mamal
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
    s.breathe();
    s.bark();
    return 0;
}