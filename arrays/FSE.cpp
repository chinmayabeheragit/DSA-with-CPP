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

    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < n; i++) { // Loop through the rest of the array
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller value is found
        }
    }

    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
