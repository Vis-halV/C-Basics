#include<iostream>
using namespace std;

int main() {
    /*This is used to allocate value atmost efficient method.*/
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;  // Used for big numbers like phone number ,etc
    cout << sizeof(short int) << endl; // Used for age, or something with less digit 
    cout << sizeof(long long) << endl; // same as long int 
    cout << sizeof(signed) << endl;    // Positive and negative integers DEFAULT
    cout << sizeof(unsigned) << endl;  // only positive integers 

    return 0;
}