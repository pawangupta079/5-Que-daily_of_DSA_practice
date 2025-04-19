#include <iostream>  
using namespace std;  

int main()  
{  
    int n;  
    cout << "Enter the size of array: ";  
    cin >> n;  

    // Declare the original array  
    int arr[n];  

    // Input the array elements  
    cout << "Enter " << n << " elements: ";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    // Declare the array for reversed elements  
    int Rarr[n];  

    // Reverse the array  
    for (int i = 0; i < n; i++) {  
        Rarr[i] = arr[n - 1 - i]; // Store elements in reverse order  
    }  

    // Output the reversed array  
    cout << "The reversed array is: ";  
    for (int i = 0; i < n; i++) {  
        cout << Rarr[i] << " "; // Print each element of the reversed array  
    }  
    cout << endl; // New line after output  

    return 0; // End of the program  
}  