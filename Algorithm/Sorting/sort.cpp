#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {3, 5, 4, 6, 1, 2};

    sort(vec.begin(), vec.end());   // Ascending Order 

    cout << "Ascending order : ";
    for(auto val : vec) {
        cout << val <<  " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), greater<int>());   // Descending order 

    cout << "Descending order : ";
    for(auto val : vec) {
        cout << val <<  " ";
    }
    cout << endl;

    return 0;
}