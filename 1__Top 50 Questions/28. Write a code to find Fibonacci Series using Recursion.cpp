#include <iostream>
using namespace std;    
int fibo(int n){
    if (n==0) // Base case: if n is 0, return 0
        return 0;
    if (n==1) // Base case: if n is 1, return 1
        return 1;
    return fibo(n-1) + fibo(n-2); // Recursive case: return the sum of the two preceding Fibonacci numbers  

}
int main(){
    int n;
    cout<<"Enter the number of terms in the Fibonacci series: ";
    cin>>n; // Input the number of terms in the Fibonacci series
    cout<<"Fibonacci Series: ";
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" "; // Print each term of the Fibonacci series using the fibo function
    }
    cout<<endl; // New line after output
    return 0; // Return 0 to indicate successful completion of the program
}