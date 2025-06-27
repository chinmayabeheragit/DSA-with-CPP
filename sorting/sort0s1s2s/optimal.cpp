#include <bits/stdc++.h>
using namespace std;

// Optimal method (Dutch National Flag Algorithm)
void sort0s1s2sBruit(vector<int>& arr) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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
