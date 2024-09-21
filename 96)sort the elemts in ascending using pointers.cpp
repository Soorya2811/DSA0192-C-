#include <iostream>
using namespace std;

 
void sortArray(int *arr, int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (*(arr + i) > *(arr + j)) {
            
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[100];  
    int count = 0; 

    cout << "Enter Infinite Numbers and (-1 To Stop Reading):" << endl;
    
    
    while (true) {
        int num;
        cin >> num;
        if (num == -1) break; 
        arr[count++] = num;   
    }

    
    sortArray(arr, count);

     
    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << *(arr + i) << endl;
    }

    return 0;
}
