#include<iostream>
#include<string>
using namespace std;

 
bool isValidUserName(string userName1, string userName2) {
     
    if(userName1 == userName2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string userName1, userName2;

     
    cout << "Enter the user name: ";
    getline(cin, userName1);  
    cout << "Reenter the user name: ";
    getline(cin, userName2);

  
    if(isValidUserName(userName1, userName2)) {
        cout << "User name is valid!" << endl;
    } else {
        cout << "User name is not valid!" << endl;
    }

    return 0;
}
