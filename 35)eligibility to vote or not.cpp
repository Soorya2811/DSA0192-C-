#include<iostream>
using namespace std;

 
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

 
void checkEligibility(int age) {
    const int votingAge = 18;

    if (age >= votingAge) {
        cout << "You are eligible to vote!" << endl;
    } else {
        int yearsLeft = votingAge - age;
        cout << "You are allowed to vote after " << yearsLeft << " years." << endl;
    }
}

int main() {
 
    int age = getPerson();

  
    checkEligibility(age);

    return 0;
}
