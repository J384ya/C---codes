#include <bits/stdc++.h>
using namespace std;

void cubesort(vector<int>& A, int p) {
    int n = A.size();
    vector<int> subarray(n / p);

    // Step 1: Partition the data
    for (int i = 0; i < p; i++) {
        copy(A.begin() + i * (n / p), A.begin() + (i + 1) * (n / p), subarray.begin());

        // Step 2: Sort each subarray in parallel
        sort(subarray.begin(), subarray.end());

        // Step 3: Merge the sorted subarrays
        for (int dim = 0; dim < log2(p); dim++) {
            int partner = i ^ (1 << dim);
            vector<int> buffer(n / p);
            copy(subarray.begin(), subarray.end(), buffer.begin());

            if (i < partner) {
                merge(subarray.begin(), subarray.end(), buffer.begin(), buffer.end(), subarray.begin());
            } else {
                merge(buffer.begin(), buffer.end(), subarray.begin(), subarray.end(), subarray.begin());
            }
        }

        // Step 4: Copy the sorted subarray back to the original array
        copy(subarray.begin(), subarray.end(), A.begin() + i * (n / p));
    }
}

int main() {
    // Create an array of integers
    vector<int> A = {5, 8, 2, 3, 1, 6, 9, 7, 4};

    // Sort the array using Cubesort with 2 processors
    cubesort(A, 2);
    cout<<"Sorted array"<<endl;
    // Print the sorted array
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}