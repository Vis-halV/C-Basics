#include<iostream>
using namespace std;

int main() {
    int num[] ={5 , 56, -34 -5 , 0, 10};
    int size = 6;

    int min = INT_FAST8_MAX;

    for(int i = 0; i < size; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }
     
    cout << "Smallest number : " << min << endl;

    return 0;
}