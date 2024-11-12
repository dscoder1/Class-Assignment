#include <iostream>
using namespace std;
class Overload
{
public:
//Function Overloading
    void Addition(int a, int b)
    {
        cout << "\nAddition Is :" << (a + b);
    }
    void Addition(int a, int b, int c)
    {
        cout << "\nAddition Is :" << (a + b + c);
    }
};
int main()
{
    Overload obj;
    obj.Addition(10, 20);
    obj.Addition(10, 20, 30);
    return 0;
}