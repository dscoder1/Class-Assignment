#include <iostream>
using namespace std;
class Comp
{
    int val1, val2;

public:
    void setVal()
    {
        cout << "\nEnter Val 1: " << endl;
        cin >> val1;
        cout << "\nEnter Val 2: " << endl;
        cin >> val2;
    }
    Comp operator==(Comp &obj2)
    {
        int sum;
        sum = obj2.val1 + obj2.val2;
        cout << "\nAfter Sum Result Is : " << sum << endl;
    }
    Comp operator!=(Comp &obj2)
    {
        int sub;
        sub = obj2.val1 - obj2.val2;
        cout << "\nAfter Subtraction Result Is : " << sub << endl;
    }
};
int main()
{
    Comp obj1, obj2;
    obj1.setVal();
    obj2.operator==(obj1);
    obj2.operator!=(obj1);
    return 0;
}