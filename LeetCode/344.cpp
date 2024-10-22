#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int st = 0, end = s.size()-1;

    while(st <= end) {
        swap(s[st++], s[end--]);
    }
}

int main() {
    vector<char> s = {'v', 'i', 's', 'h', 'a', 'l'};
    reverseString(s);

    for(auto ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}