#include<iostream>
using namespace std;

int main() {
    /* Thhis has the complexity of O(1) which is commonly known as constant complexity */
    int n = 5;
    // cin >> n;
    int ans = n * (n + 1) / 2;
    cout << ans;

    return 0; 
}