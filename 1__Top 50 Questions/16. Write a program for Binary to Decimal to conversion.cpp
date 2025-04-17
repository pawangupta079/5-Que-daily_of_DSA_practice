#include <iostream>
using namespace std;

void bina(int a){
    if (a == 0) return;
    bina(a / 2);
    cout << (a % 2);
}

int main()
{
    int a;
    cout << "Enter first number: ";
    cin >> a;       // take input first
    bina(a);        // then print binary
    return 0;
}
