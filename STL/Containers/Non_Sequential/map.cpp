#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<string, int> m; // Sorted and no repeated values 
    multimap<string, int> m1; // Repeatables values 
    //Can be only inserted using insert({}), emplace()
    unordered_map<string, int> m2;  // Random order and no sorting is done 

    m["Venki"] = 103;
    m["Vijay"] = 104;
    m["Vishal"] = 105;

    for(auto val : m) {
        cout << val.first << " : " << val.second << endl; 
    }

    return 0;
}