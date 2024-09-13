#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) { // found
            return i + 1; // at index
        }
    }

    return -1;
}

int main() {
    int arr[] ={4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    int size = 7;

    cout << "Found at " << linearSearch(arr, size, target) << "th position."<< endl;
    return 0;
}