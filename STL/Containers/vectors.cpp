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

    vec.erase(vec.begin()); // To delete first element 
    printVec(vec);

    vec.erase(vec.begin() + 1); // To delete second element 
    printVec(vec);
    // Erases the value but does not decrese the capacity like popback()

    vec.insert(vec.begin(), 1); // To insert at beignning 
    printVec(vec); 

    vec.clear(); // To clear the vector
    cout << "Is empty " << vec.empty() << endl; // True - 1 i.e empty after clear
    cout << "Is empty " << vec.empty() << endl; // True - 1 i.e empty after clear

    printVec(vec);
    cout << "vec.begin : " << *(vec.begin()) << endl;
    cout << "vec.end : " << *(vec.end()) << endl;
    
    return 0;
}