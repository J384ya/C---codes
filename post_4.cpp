// Recursion on arrays involves breaking down an array into smaller sub-arrays 
// until the base case is reached. The base case is the condition that stops the 
// recursion and returns a value. For example, consider the problem of reversing 
// an array. We can use recursion to solve this problem by swapping the first and 
// last elements of the array and then recursively calling the function on the 
// remaining sub-array. The base case is when the sub-array has only one element, 
// in which case we return the array as is.

#include <iostream>
using namespace std;

// A recursive function to find the maximum element in an array
int maxElement(int arr[], int n) {
  // Base case: when the array has only one element
  if (n == 1) {
    return arr[0];
  }
  // Recursive case: compare the last element with the maximum of the rest
  int max = maxElement(arr, n - 1);
  if (arr[n - 1] > max) {
    return arr[n - 1];
  } else {
    return max;
  }
}

int main() {
  int arr[] = {3, 5, 2, 7, 9, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "The maximum element in the array is: " << maxElement(arr, n) << endl;
  return 0;
}
