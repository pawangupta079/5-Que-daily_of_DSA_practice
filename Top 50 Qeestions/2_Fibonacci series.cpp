#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << fibonacci(0) << ", " << fibonacci(1); // Print the first two terms

    for (int i = 2; i < n; i++) {
        cout << ", " << fibonacci(i);
    }
    cout << endl;

    return 0;
}