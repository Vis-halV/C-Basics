#include<iostream>
using namespace std;

void revArr(int arr[], int size) {
    int start = 0, end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {9, 8, 3, 4, 1, 2, 5};
    int size = 7;

    cout << "Array befor reversing :" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    revArr(arr, size);
    
    cout << "Array after reversing :" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}