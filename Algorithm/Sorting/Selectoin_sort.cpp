#include <iostream>
using namespace std;

void selectSort(int arr[], int n) { 
    for(int i = 0; i<n-1; i++) {
        int smallIdx = i;   // Unsorted parts starting 
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[smallIdx]) {
                smallIdx = j;
            }
        }

        swap(arr[i], arr[smallIdx]);
    } 
}

void printArr(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectSort(arr, n);
    printArr(arr, n);

    return 0;
}