#include<iostream>
using namespace std;

void prime(int n) {
    int flag = 1;

    for (int i = 2; i <= n / 2; i++) {  
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout << "The given number " << n << " is a prime number." << endl;
    } else {
        cout << "The given number " << n << " is a composite number." << endl;
    }
}

int main() {
    int n = 5;
    prime(n);

    int m = 7;
    prime(m);

    int o = 15;
    prime(o);
    
    return 0;
}
