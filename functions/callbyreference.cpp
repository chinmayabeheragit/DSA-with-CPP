#include <iostream>
using namespace std;

// Function that demonstrates pass by reference
void modifyValue(int &x) {  // Use reference operator `&`
    x = x + 10;  // Modify the actual variable through its reference
    cout << "Inside modifyValue: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before modifyValue: " << a << endl;
    modifyValue(a);  // Pass `a` by reference
    cout << "After modifyValue: " << a << endl;  // `a` is modified
    return 0;
}
