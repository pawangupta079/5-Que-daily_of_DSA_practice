<#include <iostream>
#include <string>
using namespace std;    

// Function to remove spaces from a string
string removeSpaces(const string& str) {
    string result;
    for (char ch : str) {
        if (ch != ' ') { // Check if the character is not a space
            result += ch; // Append non-space characters to the result
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Use getline to allow spaces in the input

    string output = removeSpaces(input); // Call the function to remove spaces

    cout << "String after removing spaces: " << output << endl; // Print the result

    return 0;
}