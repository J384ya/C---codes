#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum element in the array
int getMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to perform counting sort based on the digit represented by exp
void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    vector<int> count(10, 0);

    // Counting occurrences of each digit
    for (int i = 0; i < arr.size(); i++)
        count[(arr[i] / exp) % 10]++;

    // Calculating cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Building the output array
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copying the output array to arr
    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

// Radix Sort function
void radixSort(vector<int>& arr) {
    // Find the maximum number to know the number of digits
    int max = getMax(arr);

    // Perform counting sort for every digit, starting from the least significant digit to the most significant digit
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

int main() {
    // Example usage
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    cout << "Original array:\n";
    for (int i : arr)
        cout << i << " ";
    cout << "\n";

    // Applying Radix Sort
    radixSort(arr);
    cout << "Sorted array:\n";
    for (int i : arr)
        cout << i << " ";
    cout << "\n";

    return 0;
}