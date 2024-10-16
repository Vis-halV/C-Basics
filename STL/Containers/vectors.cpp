#include <iostream>
#include <vector>
using namespace std;

void printVec(vector <int> vec) {
    for(int i : vec) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    vector<int> vec;
    cout << "The size of vector is : " << vec.size() << endl;

    vec = {1, 2};
    cout << "The updated vector : ";
    printVec(vec);
    cout << "The size of vector is : " << vec.size() << endl;

    vector<int> A(3,10);
    vector<int> B(A);

    printVec(A);    
    printVec(B);

    return 0;
}