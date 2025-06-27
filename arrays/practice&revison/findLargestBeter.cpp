#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int n = arr.size();
    int maxElement = arr[0]; 
    for (int i = 1; i < n; i++) {
        maxElement = max(maxElement, arr[i]);
    }
    return maxElement;
}

int main() {
    vector<int> arr = {3, 1, 7, 5, 9, 2};  // Hardcoded input
    cout << "Largest Element: " << largestElement(arr) << endl;
}
