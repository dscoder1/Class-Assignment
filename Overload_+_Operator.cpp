#include <iostream>
using namespace std;
class Overload_Plus_Operator
{
    int a[3][3], b[3][3];

public:
    void setData()
    {
        cout << "\nEnter Data For 1st Matrix: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "\nEnter Data For 2nd Matrix: " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    Overload_Plus_Operator operator+(Overload_Plus_Operator &obj3)
    {
        int c[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = obj3.a[i][j] + obj3.b[i][j];
            }
        }
        cout << "\nAfter Addition Matrix Is :" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    Overload_Plus_Operator obj, obj1;
    obj.setData();
    obj1.operator+(obj);
    return 0;
}