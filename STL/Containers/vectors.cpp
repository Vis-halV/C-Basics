#include <iostream>
#include <vector>
using namespace std;

void printVec(vector <int> vec) {
    for(int i : vec) {
        cout << i << " ";
    }

    cout << endl;
}

void printSizeCap(vector<int> vec) {
    cout << "The size of vector is : " << vec.size() << endl;
    cout << "The capacity of vector is : " << vec.capacity() << endl;
}

int main() {
    vector<int> vec;
    vec = {1, 2};
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.pop_back();

    printVec(vec);

    cout << "Element at index 2 using square brackets like array " << vec[2] << " or by at(index) " << vec.at(2) << endl;

    // To access first and last element 
    cout << "Front : " << vec.front() << endl;
    cout << "Back : " << vec.back() << endl;

    return 0;
}