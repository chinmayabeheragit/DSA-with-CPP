#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; // User inputs the size of the array

    int arr[n]; // Array to hold user-input values
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // User inputs each element of the array
    }

    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) { // Loop through the rest of the array
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger value is found
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}
