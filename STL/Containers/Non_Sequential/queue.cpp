#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout << s.front() << endl;
        s.pop();
    } 
    cout << endl;

    return 0;
}