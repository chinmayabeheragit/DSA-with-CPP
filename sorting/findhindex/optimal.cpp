#include <bits/stdc++.h>
using namespace std;

// Optimal function to calculate H-index
int findHindexOptimal(vector<int>& citations) {
    sort(citations.begin(), citations.end()); // Sort citations in ascending order
    int n = citations.size();

    for (int i = 0; i < n; ++i) {
        int h = n - i;  // h is the number of papers with at least citations[i] citations
        if (citations[i] >= h) {
            return h;   // Found the H-index
        }
    }

    return 0; // If no valid h found, return 0
}

// Driver code to test the function
int main() {
    vector<int> citations = {3, 0, 5, 3, 0};

    cout << "H-Index is: " << findHindexOptimal(citations) << endl;

    return 0;
}
