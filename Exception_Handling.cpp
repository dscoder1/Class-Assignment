// #include <iostream>
// using namespace std;
// // class Error
// // {
// //     int num1;

// // public:
// //     void setNum()
// //     {
// //         cout << "\nEnter Value Of Number :" << endl;
// //         cin >> this->num1;
// //         cout << "\nValue Of Number Is :" << this->num1;
// //     }
// //     void Divide()
// //     {
// //         try
// //         {
// //             cout << "Number After Divided :" << (this->num1 / 0);
// //         }
// //         catch (const exception &e)
// //         {
// //             cout << "\nError Is :" << e.what() << endl;
// //         }
// //     }
// // };
// int main()
// {
//     // Error obj;
//     // obj.setNum();
//     // obj.Divide();
//     int num;
//     cout << "\nEnter Value Of Number :" << endl;
//     cin >> num;
//     cout << "\nValue Of Number Is :" << num;
//     try
//     {
//         cout << "\nAfter Divided Number Is : " << (num / 0);
//     }
//     catch (const exception &e)
//     {
//         cout << e.what() << '\n';
//     }

//     return 0;
// }
#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int num1, int num2) {
    if (num2 == 0) {
        throw runtime_error("Division by zero error");
    }
    return num1 / num2;
}

int main() {
    try {
        int result = divide(10, 0);  // Will throw an exception
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
