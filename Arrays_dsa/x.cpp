#include<iostream>
using namespace std;

int main() {
    /* CREATION */
    int x[10]; // Just declaring space 

    int marks[5] = {99, 98, 100, 95, 91}; // Declaration and initialising with data
    int size = 5;

    double price[] = {30.5, 35.5, 30.0}; // gets value of memory of 3 

    /*UPDATION*/
    marks[0] = 100;

    /*Printing*/
    cout << "Printing using Index" << endl;
    cout << "\tMarks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    /* Printig using loop */
    cout << "Printing using for loop " << endl;
    for(int i = 0; i < size; i++) {
        cout << "Mark " << i << " : " << marks[i] << endl;
    }

    /*  To find size of an array dynamically
            data_type SIZE = sizeof(array_name) / sizeof(data_type) */

    int size_prize = sizeof(price) / sizeof(double);
    cout << "\nSize of prize array : " << size_prize << endl;

    /* INSERTION using FOR LOOP */
    int num[10];
    for(int i = 0; i < 10; i++) { // i/o
        cout << "Number " << (i+1) << " : " ;
        cin >> num[i]; 
    }
    for(int i = 0; i < 10; i++) { // o/p
        cout << "Number " << i << " : " << num[i] << endl;
    }


    return 0;
}