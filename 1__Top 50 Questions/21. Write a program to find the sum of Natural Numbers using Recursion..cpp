#include<iostream>
using namespace std;

int sumNetural(int n){
    if (n==1)
        return 1
    if (n==2)return 3;

    return n+ sumNetural(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";

    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sumNetural(n)<<endl;
    return 0;   



}