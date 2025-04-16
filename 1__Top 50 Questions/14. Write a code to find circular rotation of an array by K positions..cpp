#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k is greater than n
    vector<int> temp(n);
    
    // Copy the last k elements to the front of the temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Copy the remaining elements to the temp array
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }
    
    // Copy the rotated array back to the original array
    arr = temp;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    rotateArray(arr, k);
    
    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
