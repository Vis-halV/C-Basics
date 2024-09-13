#include<iostream>
using namespace std;

/* We have wriiten a code to double the value of an array */

void changeArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];
    }
}

/* We are sending the array by pass by reference 
    not the value so the changes in the changeArr 
    will also affect the value 
    in the array declare globally in the main function.*/

int main() {
    int arr[] = {1, 2, 3};

    changeArr(arr, 3);
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;    

    return 0;
}