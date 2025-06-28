#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesOptimal(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0; // Points to last unique element

    for (int i = 1; i < n; i++) { // {1[j],1[i],2,2,2,3,3} j is constant pointer i will compare 
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // Number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicatesOptimal(arr, n);

    cout << "Optimal - Unique Elements:\n";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}




// | `i` | arr\[i] | arr\[j] | Comparison | Action                                | Resulting Array        |
// | --- | ------- | ------- | ---------- | ------------------------------------- | ---------------------- |
// | 1   | 1       | 1       | `1 == 1`   | Duplicate → skip                      | \[1, 1, 2, 2, 2, 3, 3] |
// | 2   | 2       | 1       | `2 != 1`   | New number → `j++`, `arr[j] = arr[i]` | \[1, 2, 2, 2, 2, 3, 3] |
// | 3   | 2       | 2       | `2 == 2`   | Duplicate → skip                      | \[1, 2, 2, 2, 2, 3, 3] |
// | 4   | 2       | 2       | `2 == 2`   | Duplicate → skip                      | \[1, 2, 2, 2, 2, 3, 3] |
// | 5   | 3       | 2       | `3 != 2`   | New number → `j++`, `arr[j] = arr[i]` | \[1, 2, 3, 2, 2, 3, 3] |
// | 6   | 3       | 3       | `3 == 3`   | Duplicate → skip                      | \[1, 2, 3, 2, 2, 3, 3] |
