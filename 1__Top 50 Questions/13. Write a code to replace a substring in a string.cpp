#include <iostream>
using namespace std;
int main() {
    string str = "Hello, World!";
    string toReplace = "World";
    string replaceWith = "C++";

    // Find the position of the substring to replace
    size_t pos = str.find(toReplace);
    if (pos != string::npos) {
        // Replace the substring
        str.replace(pos, toReplace.length(), replaceWith);
    }

    cout << str << endl; // Output: Hello, C++!
    return 0;
}
