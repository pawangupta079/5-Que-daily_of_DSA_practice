#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    unordered_map<char, int> frequencyMap;

    // Calculate frequency of each character
    for (char c : str) {
        frequencyMap[c]++;
    }

    // Print the frequency of each character
    cout << "Character frequencies:" << endl;
    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
// or
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    unordered_map<char, int> frequencyMap;

    // Calculate frequency of each character
    for (char c : str) {
        frequencyMap[c]++;
    }

    // Print the frequency of each character
    cout << "Character frequencies:" << endl;
    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
// or   