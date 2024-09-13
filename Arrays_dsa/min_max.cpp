#include<iostream>
using namespace std;

int main() {
    int num[] ={5 , 56, -34, -5 , 0, 10};
    int size = 6;

    int min = INT_FAST8_MAX;
    int max = INT_FAST8_MIN;

    for(int i = 0; i < size; i++) {
        if(num[i] < min) {
            min = num[i];
        }
        if(num[i] > max) {
            max = num[i];
        }
    }
     
    cout << "Smallest number : " << min << endl;
    cout << "Largest number : " << max << endl;

    return 0;
}