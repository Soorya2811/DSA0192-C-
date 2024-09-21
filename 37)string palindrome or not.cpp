#include<iostream>
#include<string>
using namespace std;

 
inline bool isPalindrome(string str) {
    int n = str.length();
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            return false;  
        }
    }
    return true;  
}

int main() {
    string inputString;

    
    cout << "Enter the string: ";
    cin >> inputString;

    
    for(int i = 0; i < inputString.length(); i++) {
        inputString[i] = toupper(inputString[i]);
    }

    
    if(isPalindrome(inputString)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }

    return 0;
}
