#include <iostream>
#include <cctype> // for isalpha function
#include <cstring> // for strlen function
#include <cstdlib> // for exit function
#include <cstdio> // for printf function
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if (!isalpha(ch)) {
        cout << "Invalid input. Please enter an alphabet." << endl;
        exit(0); // Exit the program if input is invalid
    }

    // Convert character to lowercase for uniformity
    ch = tolower(ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}
