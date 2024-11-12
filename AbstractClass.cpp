#include <iostream>
using namespace std;
class Operation
{
public:
    virtual void add() = 0;
    virtual void sub() = 0;
    virtual void mul() = 0;
    virtual void div() = 0;
};
class Add : public Operation
{
    int num1, num2;

public:
    void add()
    {
        cout << "\nEnter Two Number :";
        cin >> num1 >> num2;
        cout << "\nAddition Is : " << (num1 + num2);
    }
    void sub()
    {
        cout << "\nEnter Two Number :";
        cin >> num1 >> num2;
        cout << "\nAddition Is : " << (num1 - num2);
    }
    void mul()
    {
        cout << "\nEnter Two Number :";
        cin >> num1 >> num2;
        cout << "\nAddition Is : " << (num1 * num2);
    }
    void div()
    {
        cout << "\nEnter Two Number :";
        cin >> num1 >> num2;
        cout << "\nAddition Is : " << (num1 / num2);
    }
};
int main()
{
    Add obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}