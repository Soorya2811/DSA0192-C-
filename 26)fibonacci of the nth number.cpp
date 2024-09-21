#include <iostream>
using namespace std;
int main()
{
	int n,i,n1=0,n2=1,n3=0;
	cout<<"enter the number count:";
	cin>>n;
	if(n==1)
	{
		n3=n1;
	}
	else if(n==2)
	{
		n3=n2;
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			n3=n1+n2;
			n1=n2;
			n2=n3;
		}
	}
	cout<<"the fibonacci series for given count "<<n<<" is "<<n3;
}