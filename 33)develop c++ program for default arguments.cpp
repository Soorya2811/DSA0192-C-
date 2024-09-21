#include<iostream>
using namespace std;


int sum(int a = 10, int b = 15, int c = 25, int d = 30) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    
    cout << "Enter the values: ";
    cin >> a >> b >> c >> d;


    int result = sum(a, b, c, d);

    cout << "Sum: " << result << endl;

    return 0;
}
