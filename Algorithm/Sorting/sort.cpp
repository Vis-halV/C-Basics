#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;  // If second number is greater than the first then true 
    if(p1.second > p2.second) return false; // Else false 

    if(p1.first < p2.first) return true;    // When has same second value compare first value 
    else return false; // vice versa 
}

int main() {
    vector<pair<int, int>> p = {{1,1}, {1,2}, {2,1}, {2,2}};

    // Ascending order  

    sort(p.begin(), p.end()); 

    cout << "Ascending order by first value : " << endl;
    for(auto val : p) {
        cout << val.first << " " << val.second << endl;
    }

    // Ascending order by second value

    sort(p.begin(), p.end(),comparator); 

    cout << "Ascending order by second value : " << endl;
    for(auto val : p) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}