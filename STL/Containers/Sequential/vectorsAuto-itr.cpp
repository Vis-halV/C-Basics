#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    
    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        cout << *(itr) << " ";
    }

    cout << endl;

    return 0;
}