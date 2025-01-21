#include<bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aliceScore = 0, bobScore = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }

    return {aliceScore, bobScore};
}

// Example Usage
int main() {
    vector<int> a = {17, 28, 30};
    vector<int> b = {99, 16, 8};

    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << endl; // Output: 2 1

    return 0;
}
