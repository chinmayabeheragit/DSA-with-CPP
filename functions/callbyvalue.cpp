#include <iostream>
using namespace std;

// Function that demonstrates pass by value
void modifyValue(int x) {
    x = x + 10;  // Modify the local copy of x
    cout << "Inside modifyValue: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before modifyValue: " << a << endl;
    modifyValue(a);  // Pass a copy of `a` to the function
    cout << "After modifyValue: " << a << endl;  // `a` is unchanged
    return 0;
}
