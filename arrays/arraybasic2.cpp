#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};

    // Access elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Output:
// 1 2
// 3 4
