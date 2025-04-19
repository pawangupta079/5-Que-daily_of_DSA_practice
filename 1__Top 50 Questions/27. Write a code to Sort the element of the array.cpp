#include< bits/stdc++.h>
using namespace std;

void sortedArray(int arr[], int n) {
    // Sort the array using the built-in sort function
    sort(arr, arr + n);
}
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element of the sorted array
    }
    cout << endl; // New line after output
}               