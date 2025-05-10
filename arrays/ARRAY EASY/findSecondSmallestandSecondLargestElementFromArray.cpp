#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& a, int n) {
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int>& a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] > smallest && a[i] < ssmallest) { // Fix: Correctly update ssmallest
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return {slargest, ssmallest};
}

int main() {
    // Test case 1
    vector<int> a1 = {1, 2, 3, 4, 5};
    int n1 = a1.size();
    vector<int> result1 = getSecondOrderElements(n1, a1);
    cout << "Second largest: " << result1[0] << ", Second smallest: " << result1[1] << endl;

    // Test case 2
    vector<int> a2 = {3, 4, 5, 2};
    int n2 = a2.size();
    vector<int> result2 = getSecondOrderElements(n2, a2);
    cout << "Second largest: " << result2[0] << ", Second smallest: " << result2[1] << endl;

    return 0;
}
