#include <iostream>
using namespace std;
class A
{
public:
    int num1 = 10;
};
class B : public A // Heirarichal Inheritance
{
public:
    int num2 = 20;
};
class C : public A // Heirarichal Inheritance
{
public:
    int num3 = 30;
};

// class B //Multiple Inheritance
// {
// public:
//     int num2 = 20;
// };

// class B : public A // Single Level Inheritance For B Class
// {
// public:
//     int num2 = 20;
// };
// class C : public B // Multilevel Inheritance For C Class
// {
// public:
//     int num3 = 30;
// };

// class D : public A, public B // Multiple Inheritance
// {
// public:
//     int num4 = 40;
// };

int main()
{
    /*B obj;
    cout << "\nValue Of Num 1: " << obj.num1 << endl;*/
    /*Upper Code Define Single Level Inheritance*/

    /*C obj1;
    cout << "\nValue Of Num 1: " << obj1.num1 << endl;
    cout << "\nValue Of Num 2: " << obj1.num2 << endl;*/
    /*Upper Code Define Multi Level Inheritance*/

    /*D obj2;
    cout << "\nValue Of Num 1: " << obj2.num1 << endl;
    cout << "\nValue Of Num 2: " << obj2.num2 << endl;*/
    /*Upper Code Defines Multiple Inheritance*/

    /*B obj3;
    cout << "\nValue Of Num 1: " << obj3.num1 << endl;
    C obj4;
    cout << "\nValue Of Num 1: " << obj4.num1 << endl;*/
    /*Upper Code Defines Hierarichal Inheritance*/
    return 0;
}