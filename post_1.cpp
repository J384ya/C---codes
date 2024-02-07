#include <iostream>
using namespace std;
int main() {
    // Declare a pointer to an integer
    int* dynamicNum;

    // Dynamically allocate memory for an integer
    dynamicNum = new int;

    // Assign a value to the dynamically allocated integer
    *dynamicNum = 42;

    // Print the value and address of the dynamically allocated integer
    cout << "Value of dynamicNum: " << *dynamicNum << endl;
    cout << "Address of dynamicNum: " << dynamicNum << endl;

    // Modify the value through the pointer
    *dynamicNum = 100;

    // Print the modified value of the dynamically allocated integer
    cout << "Modified value of dynamicNum: " << *dynamicNum << endl;

    return 0;
}
