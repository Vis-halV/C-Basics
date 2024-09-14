#include <iostream>
#include <vector>
using namespace std;

void size_cap_prnt(vector<int>& vec) {
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
    for(int i : vec){
        cout << i << endl;
    }
}

int main() {
    vector<int> vec;
    size_cap_prnt(vec);

    vec.push_back(0);
    size_cap_prnt(vec);

    vec.push_back(1);
    vec.push_back(2);
    size_cap_prnt(vec);

    vec.push_back(3);
    vec.push_back(4);
    size_cap_prnt(vec);

    /*  Read the README.md for understanding how this capacity and 
    size allocation are done dynamically. */

    return 0;
}
