#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;

    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_front(2);
    lst.push_front(1);

    lst.pop_back();
    lst.pop_back();
    lst.pop_front();

    for(int val : lst) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}