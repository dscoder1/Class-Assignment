#include <iostream>
using namespace std;
class VirtaulFun
{
    int num1;
    void setVal()
    {
        cout << "\nEnter A Number: " << endl;
        cin >> this->num1;
        cout << "\nValue Is :" << this->num1 << endl;
    }
    virtual void add(int a, int b);
};
class ChildVirtualFun : public VirtaulFun
{
};
int main()
{
    VirtaulFun obj;
    ChildVirtualFun obj1;
    return 0;
}