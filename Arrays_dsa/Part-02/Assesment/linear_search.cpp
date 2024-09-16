#include<iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> vec, int value) {
    int count = 0;
    for(int i : vec) {
        if(i = value) { // found
            cout << "The value is found ";
            return; // at index
        }
        cout << "The value is not found ";
        
    }

    return;
}

int main() {
    vector<int> vec ={42, 25, 73, 85, 123, 29, 45};
    int value = 85;
    linearSearch(vec, value);

    return 0;
}