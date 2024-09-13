#include<iostream>
using namespace std;

int main() {
    int arr[] = {9, 8, 3, 4, 1, 2, 5};
    int size = 7;

    cout << "Array :" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    cout << "Sum of an array :" << endl;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << sum << endl;

    cout << "Product of an array :" << endl;
    int pro = 1;
    for(int i = 0; i < size; i++) {
        pro *= arr[i];
    }

    cout << pro << endl;

    
    
    return 0;
}