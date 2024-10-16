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
    printSizeCap(vec);
    vec = {1, 2};

    cout << "The updated vector : ";
    printVec(vec);
    printSizeCap(vec);
    
    vec.push_back(3);
    vec.push_back(4);
    cout << "Updated vector using push back :" ;
    printVec(vec);
    printSizeCap(vec);

    vec.push_back(5);
    cout << "Updated vector using push back :" ;
    printVec(vec);
    printSizeCap(vec);
    
    vec.pop_back();
    cout << "After pop back : ";
    printVec(vec);

    return 0;
}