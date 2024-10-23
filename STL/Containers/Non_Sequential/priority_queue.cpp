#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;  // Max heap

    q.push(5);
    q.push(10);
    q.push(7);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> q_min;  // Max heap

    q_min.push(5);
    q_min.push(10);
    q_min.push(7);

    while(!q_min.empty()) {
        cout << q_min.top() << " ";
        q_min.pop();
    }
    cout << endl;

    return 0;
}