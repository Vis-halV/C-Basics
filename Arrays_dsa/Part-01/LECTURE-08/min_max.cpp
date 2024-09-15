#include<iostream>
using namespace std;

int main() {
    int num[] ={5 , 56, -34, -5 , 0, 10};
    int size = 6;

    int min = INT_FAST8_MAX;
    int max = INT_FAST8_MIN;
    int min_index, max_index;

    for(int i = 0; i < size; i++) {
        if(num[i] < min) {
            min = num[i];
            min_index =  i + 1;

        }
        if(num[i] > max) {
            max = num[i];
            max_index = i + 1; 
        }
    }
     
    cout << "Smallest number : " << min << " found at " << min_index << endl;
    cout << "Largest number : " << max << " found at " << max_index << endl;

    return 0;
}