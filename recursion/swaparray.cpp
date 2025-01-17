#include <iostream>
using namespace std;

// Function to reverse the array recursively
void funArray(int i, int arr[], int n) {
    if (i >= n / 2) return; // Base case: If we reach the middle of the array, stop
    swap(arr[i], arr[n - i - 1]); // Swap the current element with its mirror element
    funArray(i + 1, arr, n); // Recursive call for the next pair of elements
}

int main() {
    int n;
    cout << "Input the size of the array: "; // Prompt the user for input
    cin >> n; // Input the size of the array
    
    int* arr = new int[n]; // Dynamically allocate the array
    cout << "Input the array elements: "; // Prompt for array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    funArray(0, arr, n); // Call the recursive function to reverse the array

    cout << "Reversed array: "; // Indicate the output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the reversed array
    }
    cout << endl;

    delete[] arr; // Free dynamically allocated memory
    return 0;
}
