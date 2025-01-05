// #include<iostream>
// using namespace std;
// int main (){
//     int sum = 0;
//     int n;
//     cin >> n;
//     int dup = n ;
//     while(n>0){
//          int ld = n % 10 ;
//          sum = sum + ld*ld*ld;
//          n = n/10;
//     }
//     if(sum == dup){
//     cout << "true";
//     }
//     else{
//     cout << "false";
//     }
//     return 0;
// }

#include<iostream>
#include<cmath>  // For the pow function
using namespace std;

int main() {
    int n;
    cin >> n;
    int dup = n; // Store the original number
    int sum = 0;
    int digits = 0;
    
    // Calculate the number of digits
    while (n > 0) {
        digits++;
        n = n / 10;
    }

    // Reset n back to the original number
    n = dup;
    
    // Check if the number is an Armstrong number
    while (n > 0) {
        int ld = n % 10; // Last digit
        sum += pow(ld, digits); // Raise the last digit to the power of the number of digits
        n = n / 10; // Remove the last digit
    }

    // Compare the sum with the original number
    if (sum == dup) {
        cout << "true"; // It's an Armstrong number
    } else {
        cout << "false"; // It's not an Armstrong number
    }

    return 0;
}
