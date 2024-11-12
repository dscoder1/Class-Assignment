#include <iostream>
using namespace std;
class Unary
{
    int val1, val2;

public:
    void setVal()
    {
        cout << "\nEnter Val 1 : " << endl;
        cin >> val1;
        cout << "\nEnter Val 2 : " << endl;
        cin >> val2;
    }
    Unary operator+(Unary &obj3)
    {

        int mul;
        mul = obj3.val1 * obj3.val2;
        cout << "\nAfter Multiplication Result Is : " << mul << endl;
    }
};
int main()
{
    Unary obj1, obj2;
    obj1.setVal();
    obj2.operator+(obj1);
    return 0;
}