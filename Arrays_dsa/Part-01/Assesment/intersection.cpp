#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sza = 9;
    int b[] = {2, 4, 6, 8};
    int szb = 4;

    cout << "Array a is: ";
    for(int i = 0; i < sza; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    cout << "Array b is: ";
    for(int i = 0; i < szb; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "Unique elements in array a: ";
    
    for(int i = 0; i < sza; i++) {
        int flag = 0; // assume it is different
        
        // Check if a[i] exists in array b
        for(int j = 0; j < szb; j++) {
            if(a[i] == b[j]) {
                flag = 1;  // If found in b, mark as not unique flag = 0 
                break;
            }
        }

        if(flag == 1) {
            cout << a[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
