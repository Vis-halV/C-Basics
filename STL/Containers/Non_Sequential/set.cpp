#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // NO repeated values are allowded 

    cout << "Size : " << s.size() << endl;
    for(auto i : s) {
        cout << i << endl;
    }   

    set<int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);

    cout << "Lower bound (0) : " << *(s1.lower_bound(0)) << endl;
    cout << "Lower bound (4) : " << *(s1.lower_bound(4)) << endl;
    cout << "Upper bound (0) : " << *(s1.upper_bound(0)) << endl;
    cout << "Upper bound (4) : " << *(s1.upper_bound(4)) << endl;


    return 0;
}