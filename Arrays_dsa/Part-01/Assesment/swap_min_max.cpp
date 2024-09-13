#include<iostream>
using namespace std;

int main() {
    int num[] ={5 , 6, -34, -5 , 50, 10};
    int size = 6;

    int min = INT_FAST8_MAX;
    int max = INT_FAST8_MIN;
    int min_index, max_index;

    cout << "Array :" << endl;
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }

    for(int i = 0; i < size; i++) {
        if(num[i] < min) {
            min = num[i];
            min_index =  i;

        }
        if(num[i] > max) {
            max = num[i];
            max_index =  i;
        }
    }

    cout << endl;
    cout << "Smallest number : " << min << endl;
    cout << "Largest number : " << max  << endl;

    swap(num[min_index], num[max_index]);

    cout << "Array after swapping :" << endl;
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
     

    return 0;
}