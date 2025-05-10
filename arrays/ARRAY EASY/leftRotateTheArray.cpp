#include <bits/stdc++.h>    // Include the vector library for using vectors

using namespace std;  // Using the standard namespace to avoid writing std:: before functions

// Function to rotate an array to the left by one position
vector<int> rotateArray(vector<int>& arr, int n) {
    // Step 1: Store the first element of the array, since it will be moved to the last position
    int temp = arr[0]; 
    
    // Step 2: Shift all elements one position to the left
    for(int i = 1; i < n; i++) { // Start from index 1, go up to n-1
        arr[i - 1] = arr[i];  // Move the current element to the previous index
    }
    
    // Step 3: Place the first element (stored in temp) at the last position
    arr[n - 1] = temp; 
    
    // Step 4: Return the updated array
    return arr;
}

// Main function to test the rotation
int main() {
    // Step 5: Initialize an array (vector) with sample values
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Step 6: Get the size of the array
    int n = arr.size();
    
    // Step 7: Call the rotateArray function to rotate the array
    arr = rotateArray(arr, n);
    
    // Step 8: Print the rotated array
    for(int num : arr) {  // Loop through the vector and print each element
        cout << num << " ";  // Print each number followed by a space
    }
    
    return 0; // Indicate successful execution of the program
}
