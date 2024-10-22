#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Hello World"; // Strings literals
    int len = 0;

    // cout << "Enter you char arr : "; 
    // cin.getline(str, 100, '$');

    for(int i = 0; i<str[i] != '\0'; i++) {
        len++;
    }

    cout << "Lenght : " << len << endl;

    for(char ch : str) {
        cout << ch <<  " ";
    }

    cout << endl;
    return 0;
}