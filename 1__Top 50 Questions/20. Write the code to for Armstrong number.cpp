#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number (order)
int order(int num) {
    int len = 0;
    while (num != 0) {
        len++;
        num /= 10;
    }
    return len;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int len = order(num); // Get the number of digits
    int sum = 0, temp = num, digit;

    while (temp != 0) {
        digit = temp % 10;           // Extract the last digit
        sum += pow(digit, len);      // Raise the digit to the power of len and add to sum
        temp /= 10;                  // Remove the last digit
    }

    return num == sum; // Check if the sum of powered digits equals the original number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
