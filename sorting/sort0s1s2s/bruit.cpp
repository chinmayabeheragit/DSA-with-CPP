#include <bits/stdc++.h>
using namespace std;

// Brute-force method: Count the number of 0s, 1s, and 2s, then overwrite the array
void sort0s1s2sBruit(vector<int>& arr) {
    int count0 = 0, count1 = 0, count2 = 0;
    int n = arr.size();

    // Count occurrences of 0s, 1s, and 2s
    for (int num : arr) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else if (num == 2) count2++;
    }

    // Fill the array with 0s, then 1s, then 2s
    for (int i = 0; i < count0; i++) arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++) arr[i] = 1;
    for (int i = count0 + count1; i < n; i++) arr[i] = 2;
}

// Utility function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    cout << "Original array: ";
    printArray(arr);

    sort0s1s2sBruit(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
