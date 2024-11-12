#include <iostream>
using namespace std;

class MyClass {
private:
    int* ptr;  // Pointer to dynamically allocated memory

public:
    // Constructor to allocate memory
    MyClass(int value) {
        ptr = new int;  // Allocate memory dynamically
        *ptr = value;
        cout << "Constructor: Memory allocated and initialized with value " << *ptr << endl;
    }

    // Destructor to free the dynamically allocated memory
    ~MyClass() {
        delete ptr;  // Free the allocated memory
        cout << "Destructor: Memory freed" << endl;
    }

    // Function to display value
    void display() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    {
        MyClass obj1(10);  // Constructor is called here
        obj1.display();

        MyClass obj2(20);  // Constructor is called here
        obj2.display();
    }  // Destructor is automatically called for obj1 and obj2 when they go out of scope

    return 0;
}
