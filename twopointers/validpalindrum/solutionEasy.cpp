#include <iostream>
using namespace std;

bool isUpper(char c) { return c >= 'A' && c <= 'Z'; }
bool isLower(char c) { return c >= 'a' && c <= 'z'; }
bool isDigit(char c) { return c >= '0' && c <= '9'; }

bool isAlphanumeric(char c) {
    return isUpper(c) || isLower(c) || isDigit(c);
}

char toLowerCase(char c) {
    if (isUpper(c)) return c + 32;
    return c;
}

bool isPalindrome(string s) {
    int left  = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && !isAlphanumeric(s[left]))  left++;
        while (left < right && !isAlphanumeric(s[right])) right--;

        if (toLowerCase(s[left]) != toLowerCase(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl; // 1
    cout << isPalindrome("race a car") << endl;                     // 0
    cout << isPalindrome(" ") << endl;                              // 1
    cout << isPalindrome("Was it a car or a cat I saw?") << endl;   // 1
    cout << isPalindrome("No lemon, no melon") << endl;             // 1
}