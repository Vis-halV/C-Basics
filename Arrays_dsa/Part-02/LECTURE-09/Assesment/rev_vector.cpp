#include <iostream>
#include <vector>
using namespace std;

void revArr(vector<int>& vec) {
    int start = 0, end = vec.size() - 1;

    while(start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
void prntVec(vector<int> vec, string a){
    cout << "Vector " << a << " reversing :" << endl;
    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> vec = {9, 8, 3, 4, 1, 2, 5};
    prntVec(vec, "before");
    revArr(vec);
    prntVec(vec, "after");

    return 0;
}