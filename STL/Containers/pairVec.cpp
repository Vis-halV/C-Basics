#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> vec = {{0,1}, {1,2}, {2,3}};

    vec.push_back({3,4});   // Insertionn only
    vec.emplace_back(4,5);  // IN place object creation 

    // for(pair<int, int> p : vec) {
    //     cout << p.first << " " << p.second << endl;
    // }

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}