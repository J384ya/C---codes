#include <bits/stdc++.h>
using namespace std;

// A function to find the maximum element in the array
int getMax (int arr [], int n) {
  int max = arr [0];
  for (int i = 1; i < n; i++)
    if (arr [i] > max)
      max = arr [i];
  return max;
}

// A function to perform counting sort on the array
void countSort (int arr [], int n) {
  int max = getMax (arr, n); // get the maximum element
  int count [max + 1]; // declare a count array of size max+1
  memset (count, 0, sizeof (count)); // initialize the count array with 0
  for (int i = 0; i < n; i++) // store the frequency of each element in the count array
    count [arr [i]]++;
  for (int i = 1; i <= max; i++) // calculate the prefix sum of the count array
    count [i] += count [i - 1];
  int output [n]; // declare an output array of size n
  for (int i = n - 1; i >= 0; i--) { // place the elements in the output array according to their sorted positions
    output [count [arr [i]] - 1] = arr [i];
    count [arr [i]]--; // decrement the count of the element
  }
  for (int i = 0; i < n; i++) // copy the output array to the original array
    arr [i] = output [i];
}

// A function to print an array
void printArray (int arr [], int n) {
  for (int i = 0; i < n; i++)
    cout << arr [i] << " ";
  cout << endl;
}

// Driver code
int main () {
  int arr [] = {1, 4, 1, 2, 7, 5, 2};
  int n = sizeof (arr) / sizeof (arr [0]);
  cout << "Given array is: \n";
  printArray (arr, n);
  countSort (arr, n);
  cout << "Sorted array is: \n";
  printArray (arr, n);
  return 0;
}