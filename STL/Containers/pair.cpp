#include <iostream>
using namespace std;

int main() {
    pair<int, int> p = {1, 5};
    pair<string, int> p1 = {"Vishal", 8};


    cout << p.first << endl;
    cout << p.second << endl;

    cout << p1.first << endl;
    cout << p1.second << endl;

    return 0;
}