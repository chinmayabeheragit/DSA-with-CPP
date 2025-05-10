#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < n; i++) { // Start from the 2nd element
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller value is found
        }
    }

    cout << "The smallest element is: " << smallest << endl;

    return 0;
}
