// Recursion on strings in C++ is similar to recursion on arrays. 
// We can break down a string into smaller substrings until the base case is reached.
// For example, consider the problem of finding the length of a string.
// We can use recursion to solve this problem by recursively calling the function 
// on the substring that excludes the first character of the string.
// The base case is when the string is empty, in which case we return 0.

#include <iostream>
using namespace std;

// A recursive function to check if a string is a palindrome
bool isPalindrome(string s, int i, int j) {
  // Base case: when the string is empty or has only one character
  if (i >= j) {
    return true;
  }
  // Recursive case: compare the first and last characters and check the rest
  if (s[i] == s[j]) {
    return isPalindrome(s, i + 1, j - 1);
  } else {
    return false;
  }
}

int main() {
  string s = "racecar";
  int n = s.length();
  cout << "The string is: " << s << endl;
  if (isPalindrome(s, 0, n - 1)) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }
  return 0;
}
