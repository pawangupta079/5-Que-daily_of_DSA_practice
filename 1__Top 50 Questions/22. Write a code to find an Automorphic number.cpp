//C++ Program
//Automorphic number or not
#include<iostream>
using namespace std;
//main program
int main()
{
	int num,flag=0;
	cout<<"Enter a positive number to check: ";
	//user input
	cin>>num;
	int sq= num*num;
	int store=num;
	//check for automorphic number
	while(num>0)
	{
		if(num%10!=sq%10)
		{    
                    flag=1;
                    break;
                }
		num=num/10;
		sq=sq/10;
	}
	if(flag==1)
		cout<<store<<" is not an Automorphic number.";
	else
		cout<<store<<" is an Automorphic number.";
	return 0;
}