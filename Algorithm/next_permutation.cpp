#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main() {
    string s = "abc";
    cout << "String is : " << s << endl;
    next_permutation(s.begin(), s.end());
    cout << "Next permutation is " << s << endl;

    return 0;
}