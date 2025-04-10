#include<iostream>
#include<unordered_map> // For unordered_map
#include<string> // For string      
#include<algorithm> // For std::find_if
#include<cmath> // For std::pow
using namespace std;    

// Function to find the first non-repeating character in a string
char firstNonRepeatingCharacter(const string& str) {
    unordered_map<char, int> charCount; // Map to store character counts

    // Count occurrences of each character in the string
    for (char ch : str) {
        charCount[ch]++;
    }
    // Find the first non-repeating character
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch; // Return the first non-repeating character
        }
    }
    return '\0'; // Return null character if no non-repeating character is found
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str; // Input string
    char result = firstNonRepeatingCharacter(str); // Call the function

    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
// This code finds the first non-repeating character in a string using an unordered_map to count occurrences of each character. It then iterates through the string again to find the first character with a count of 1.    