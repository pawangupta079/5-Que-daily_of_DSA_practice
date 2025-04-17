#include <iostream>
using namespace std;

int isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return 1; // Base case: all characters matched
    }
    if (str[start] != str[end]) {
        return 0; // Characters do not match
    }
    return isPalindrome(str, start + 1, end - 1); // Recursive call
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();
    if (isPalindrome(str, 0, length - 1)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}