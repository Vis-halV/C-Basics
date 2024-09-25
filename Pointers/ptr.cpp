#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl;

    int *ptr = &a;
    cout << ptr << endl;

    
    return 0;
}