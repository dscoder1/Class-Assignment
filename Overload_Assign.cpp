#include <iostream>
using namespace std;
class Assign
{
    int val;

public:
    void setVal(int val)
    {
        this->val = val;
    }
    Assign operator=(Assign &obj)
    {
        if (this->val == obj.val)
        {
            cout << "\nEqual";
        }
        else
        {
            cout << "\nNot Equal";
        }
    }
};
int main()
{
    Assign obj, obj1;
    obj.setVal(10);
    obj1.setVal(10);
    obj1.operator=(obj);
    return 0;
}