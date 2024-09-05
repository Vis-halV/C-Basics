#include<iostream>
using namespace std;

int main() {
    int n = 5, sum = 0;
    int i = 0;

    while (i <= n){
        sum += i;
        i++;
    }
    
    cout<< sum << endl;

    return 0;
}