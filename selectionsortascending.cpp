// EB3/66981/23
// Rooney Kipkorir
// C++ Language
#include <iostream>
using namespace std;

void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Find minimum element for ascending order
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {  // '<' gives ascending order
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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
    
    selectionSortAscending(arr, n);
    
    cout << "\nSorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}