#include <iostream>
using namespace std;
bool isPerfectNumber(int n) {
    if (n < 2) return false; // Perfect numbers are greater than 1
    int sum = 1; // Start with 1, as it's a divisor of all integers
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfectNumber(n)) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    return 0;
}