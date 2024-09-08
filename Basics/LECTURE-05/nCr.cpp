#include<iostream>
using namespace std;

int fact(int n) {
    int fact = 1;

    for(int i = 1; i<=n; i++) {
        fact *= i;
    }

    return fact;
}

float nCr(int n, int r) {
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 8, r = 2;
    cout << nCr(n, r) << endl;

    return 0;
}