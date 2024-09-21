#include <iostream>
using namespace std;
int main()
{
	double p,t,r,si=0;
	
	cout<<"enter the amount:";
	cin>>p;
	cout<<"\nenter the time period:";
	cin>>t;
	cout<<"\nenter the rate of intrest:";
	cin>>r;
	si=(p*r*t)/100;
	cout<<"the simple interest is = "<<si;
	
}