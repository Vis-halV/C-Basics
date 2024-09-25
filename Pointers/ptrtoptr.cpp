#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    int** parentPtr = &ptr;

    cout << *(parentPtr) << endl;
    cout << ptr << endl;
    cout << **(parentPtr) << endl;
    
    return 0;
}