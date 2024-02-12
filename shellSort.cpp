#include <iostream>
#include <vector>
void shellSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Utility function to print an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {12, 34, 7, 23, 32, 5, 67, 45};
    std::cout << "Original array: ";
    printArray(nums);
    shellSort(nums);
    std::cout << "Sorted array: ";
    printArray(nums);

    return 0;
}
