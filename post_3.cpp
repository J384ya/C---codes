#include <iostream>
using namespace std;
int main() {
    // Declare a variable
    int num = 42;

    // Declare a pointer variable and assign the address of 'num' to it
    int* ptr = &num;

    // Print the value and address of 'num'
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    // Print the value and address pointed by the pointer 'ptr'
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    // Modify the value through the pointer
    *ptr = 100;

    // Print the modified value of 'num'
    cout << "Modified value of num: " << num << endl;

    return 0;
}