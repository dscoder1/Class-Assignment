#include <iostream>
using namespace std;
class Parent
{
    int age;
    string name;

public:
    void setVal(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void Display()
    {
        cout << "\nYour Age Is :" << this->age << endl;
        cout << "\nYour Name Is :" << this->name << endl;
    }
};
class Child : public Parent
{
    int age;
    string name;

public:
    // Function Overriding
    void setVal(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    void Display()
    {
        cout << "\nYour Age Is :" << this->age << endl;
        cout << "\nYour Name Is :" << this->name << endl;
    }
};
int main()
{
    Child obj;
    obj.setVal(15, "Raj");
    obj.Display();
    return 0;
}