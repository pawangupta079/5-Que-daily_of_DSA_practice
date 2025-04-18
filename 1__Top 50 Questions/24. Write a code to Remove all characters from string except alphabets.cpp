#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the input string

    // Remove all characters except alphabets
    string result;
    for (char ch : str) {
        if (isalpha(ch)) { // Check if the character is an alphabet
            result += ch; // Append it to the result string
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl; // Print the result

    return 0;
}
// This code reads a string from the user and removes all characters except alphabets (A-Z, a-z).