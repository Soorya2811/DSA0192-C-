#include <iostream>
using namespace std;
int main()
{
	int i=0,n,num,sum=0;
	cout<<"enter the count of numbers:";
	cin>>n;
	cout<<"\nenter the numbers:"<<endl;
	do
	{
		cin>>num;
		sum+=num;
		i++;
	}
	while(i<n);
	cout<<"\nthe sum of the given number is = "<<sum<<endl;
	return 0;
}