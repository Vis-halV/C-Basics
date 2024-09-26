#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;       // 1
    cout << *(arr+1) << endl;   // 2
    cout << *(arr+2) << endl;   // 3
    cout << *(arr+3) << endl;   // 4

    return 0;
}