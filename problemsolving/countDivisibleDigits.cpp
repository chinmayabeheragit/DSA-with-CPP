#include <iostream>
using namespace std;

int countDivisibleDigits(int n) {
    int count = 0, temp = n;
    
    while (temp > 0) {
        int digit = temp % 10; // Extract last digit
        if (digit != 0 && n % digit == 0) { // Check if it evenly divides n
            count++;
        }
        temp /= 10; // Remove last digit
    }
    
    return count;
}

int main() {
    int n = 336; // Example input
    cout << countDivisibleDigits(n) << endl; // Output: 3
    return 0;
}
