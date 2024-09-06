#include <iostream>
using namespace std;

int main() {

    // Learning about memory allocaton is very necessary. //

    cout << "Size of char: " << sizeof(char) << " byte" << endl;        //char = 'a'                 //  1 byte
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;         //int = 8                    //  4 bytes
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;     //float = 8.9986             //  4 bytes
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;   //double = 3.141592653589793 //  8 bytes
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;        //bool = TRUE/FALSE          //  1 bytes  rep as 0 or 1

    return 0;
}