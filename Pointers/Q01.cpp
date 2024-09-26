#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  // 5
    cout << **q << endl; // 5 

    cout << p << endl;  // Address of a
    cout << *q << endl; // Value of p which is address of a 

    return 0;
}