#include<stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) // Base case: 0! = 1! = 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;

    // Check for negative input
    if (num < 0)
        printf("Error: Factorial of a negative number is undefined.");
    else
        printf("Factorial of %d: %d", num, factorial(num));

    return 0;
}
