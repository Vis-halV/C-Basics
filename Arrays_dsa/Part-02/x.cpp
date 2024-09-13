#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* DECLARATION */
    vector<int> vec; // Type 1 - Just declaration

    vector<char> vec1 = {'a', 'b', 'c', 'd'}; // Type 2 - adding values

    vector<int> vec2(5, 2); // Type 3 - For  5 size with common value of 2

    for(char ch : vec1) { // For each loop
        cout << ch << endl;
    }

    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[4] << endl;
    

    return 0;
}