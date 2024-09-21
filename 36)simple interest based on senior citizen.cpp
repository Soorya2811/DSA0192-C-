#include<iostream>
using namespace std;

 
double calculateInterest(double principal, int years, bool isSeniorCitizen) {
    double rateOfInterest;

     
    if (isSeniorCitizen) {
        rateOfInterest = 12.0;
    } else {
        rateOfInterest = 10.0;
    }

 
    double interest = (principal * rateOfInterest * years) / 100;

    return interest;
}

int main() {
    double principal;
    int years;
    char seniorCitizenChar;
    bool isSeniorCitizen;

     
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the number of years: ";
    cin >> years;

    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizenChar;

    
    isSeniorCitizen = (seniorCitizenChar == 'y' || seniorCitizenChar == 'Y');

 
    double interest = calculateInterest(principal, years, isSeniorCitizen);

  
    cout << "Interest: " << interest << endl;

    return 0;
}
