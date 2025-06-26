#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {  // this loop just itrate all element from the array 
    for (int j = i + 1; j < n; j++) { // this loop check one by one element from array with the one step another like if arr[i] = 1 it compare array[1] > arr[i]
      if (arr[j] < arr[i])
        return false;
    }
  }
  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  bool ans = isSorted(arr, n);
  cout << (ans ? "True" : "False") << endl;
  return 0;
}
