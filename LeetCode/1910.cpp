#include <iostream>
#include <cstring>
using namespace std;

string removeOccurences(string &str, string sub) {
    while(str.length() > 0 && str.find(sub) < str.length()) {
        str.erase(str.find(sub), sub.length());
    }

    return str;
}

int main() {
    string str = "daabcbaabcbc";
    string sub = "abc";
    cout << "The original string : " << str  << endl;
    cout << "The sub string to be removed : " << sub << endl;

    removeOccurences(str, sub);
    cout << "After removing the sub string : " << str << endl; 

    return 0;
}