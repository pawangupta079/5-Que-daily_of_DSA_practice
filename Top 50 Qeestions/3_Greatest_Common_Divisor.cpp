#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
// Compare this snippet from Top%2050%20Qeestions/4_Armstrong_number.cpp:
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int num, originalNum, remainder, result = 0, n = 0;
//     cout << "Enter an integer: ";
//     cin >> num;
//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         n++;
//     }
//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }
//     if (result == num)
//         cout << num << " is an Armstrong number." << endl;
//     else
//         cout << num << " is not an Armstrong number." << endl;
//     return 0;
// }

