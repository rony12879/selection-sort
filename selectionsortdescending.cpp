// EB3/66981/23
// Rooney Kipkorir
// C++ Language
#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;  // Find maximum element for descending order
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {  // '>' gives descending order
                maxIndex = j;
            }
        }
        
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    selectionSortDescending(arr, n);
    
    cout << "\nSorted array (Descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}