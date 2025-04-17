#include <iostream>
#include <string>
#include <algorithm> // For std::sort
using namespace std;
bool areAnagrams(string str1, string str2) {
    // Remove spaces and convert to lowercase
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    // Compare sorted strings
    return (str1 == str2);
}
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}






// # for tArray



#include<stdio.h>
#include<limits.h>
int ispalindrome(int n){
     int rev=0, temp = n;

     while(temp>0){
          int rem = temp%10;
          rev = rev*10 + rem;
          temp /= 10;
     }

     if(n==rev)
        return 1;

     return 0;
}

int main(){
    int arr[] = {1, 121, 55551, 545545, 10111, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = INT_MIN;

    for(int i=0; i<n; i++){

          if(ispalindrome(arr[i]) && res<arr[i])
             res = arr[i];

    }

    if(res==INT_MIN)
       res = -1;

    printf("%d ",res);
}