#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double p,t,r,amount,ci=0;
	
	cout<<"enter the amount:";
	cin>>p;
	cout<<"\nenter the time period:";
	cin>>t;
	cout<<"\nenter the rate of intrest:";
	cin>>r;
	amount=p*pow((1+r/100),t);
	ci=amount-p;
	cout<<"the componud interest is = "<<ci;
	cout<<"\ntotal amount is = "<<amount;
	
}