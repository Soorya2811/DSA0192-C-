#include <iostream>
using namespace std;
int main()
{
	int i=0,n,num,sum=0;
	cout<<"enter the count of numbers:";
	cin>>n;
	cout<<"\nenter the numbers:"<<endl;
	while(i<n)
	{
		cin>>num;
		sum+=num;
		i++;
	}
	cout<<"\nthe sum of the given number is = "<<sum<<endl;
}