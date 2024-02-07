#include <iostream>
using namespace std;

// A function that swaps two integers using pointers
void swap(int* a, int* b) {
  int temp = *a; // store the value of a in a temporary variable
  *a = *b; // assign the value of b to a
  *b = temp; // assign the value of temp to b
}

int main() {
  int x = 10; // declare and initialize an integer x
  int y = 20; // declare and initialize an integer y
  cout << "Before swap: x = " << x << ", y = " << y << endl; // print the values of x and y
  swap(&x, &y); // call the swap function with the addresses of x and y
  cout << "After swap: x = " << x << ", y = " << y << endl; // print the values of x and y after swapping
  return 0;
}
