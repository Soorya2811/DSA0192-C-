#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int *arr = new int[size];
    unordered_map<int, int> frequencyMap;
    
    
    cout << "Enter elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
        frequencyMap[arr[i]]++;
    }

 
    cout << "Entered Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    int mostFrequent = arr[0];
    int maxCount = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    
    cout << "Most occurred number: " << mostFrequent << endl;

 
    delete[] arr;

    return 0;
}
