#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string str = "Visanth Design";

    // for(int i = 0; i<str.length(); i++) {
    //     cout << str[i] << " ";
    // }
    // cout << endl;

    // for(auto ch  : str) {
    //     cout << ch << " ";
    // }
    // cout << endl;

    reverse(str.begin(), str.end());
    cout << "Reverse String : " << str << endl;

    return 0;
}