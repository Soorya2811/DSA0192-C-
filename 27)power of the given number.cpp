#include <iostream>
using namespace std;
int main()
{
	int i,base,expo;
	long long result=1;
	cout<<"enter the base number:";
	cin>>base;
	cout<<"\nenter the exponent number:";
	cin>>expo;
	for(i=0;i<expo;i++)
	{
		result*=base;
	}
	cout<<"the result is = "<<result;
}