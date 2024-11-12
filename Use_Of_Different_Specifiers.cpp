#include <iostream>
using namespace std;
class Access_Specifiers
{
private:
    int num1 = 10;

public:
    int num2 = 20;

protected:
    int num3 = 30;
};
class Access_Specifiers2 : public Access_Specifiers
{
public:
    void setVal()
    {
        num3 = 40;
        cout << num3 << endl;
    }
};
int main()
{
    Access_Specifiers obj;

    // cout << "\n Value Within Private :" << obj.num1 << endl;
    /* Upper Line Of Code Give An Error Because num is Private So Cannot Access Outside Of That Class Directly. */

    // cout << "\n Value Within Public :" << obj.num2 << endl;
    /* Upper Line Of Code Not Give Any Error Because num2 is Public So Can be Access Outside Of That Class Directly. */

    // cout << "\n Value Within Protected :" << obj.num3 << endl;
    /* Upper Line Of Code Give An Error Because num is Protected So Cannot Access Outside Of That Class Directly. */

    Access_Specifiers2 obj1;

    // cout << "\n Value Within Public :" << obj1.num4 << endl;
    /* Upper Line Of Code Not Give Any Error Because num2 is Public So Can be Access Outside Of That Class Directly. */

    // obj1.setVal();
    /*Upper Line Of Code Not Give Any Error Because Through setVal Function We Set Value Of Protected Variable Of Parent Class Through Child Class */

    return 0;
}