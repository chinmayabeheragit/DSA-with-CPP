#include <iostream>
using namespace std;

int main() {
    int* arr[3]; // Array of pointers
    arr[0] = new int[1]{1};
    arr[1] = new int[2]{2, 3};
    arr[2] = new int[3]{4, 5, 6};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Output:
// 1
// 2 3
// 4 5 6
