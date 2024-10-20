#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> lst;

    // Acts as a doubly linked qeque

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

    deque<int> lst1;
    lst1.emplace_back(5);
    lst1.emplace_front(3);
    lst1.emplace_front(1);

    for(int val : lst1) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}