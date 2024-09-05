#include<iostream>
using namespace std;

int main() {
    int n = 5,sum = 0;

   // cout << "Enter the value for n : ";
   // cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    
    cout << sum << endl;
    return 0;
}