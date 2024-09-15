#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* size() function */
    vector<char> vec = {'a', 'b', 'c', 'd'}; 
    
    cout << "Size of vector " << vec.size() << endl;

    for(char i : vec){
        cout << i << endl;
    }

    /* push_back() function for insertion at end */
    vector<int> vec1;
    vec1.push_back(10); 
    vec1.push_back(20); 
    vec1.push_back(30); 
    
    cout << "Size of vector " << vec1.size() << endl;

    for(int i : vec1){
        cout << i << endl;
    }

    /* pop_back() function for deletion at end */
    vec1.pop_back();
    
    cout << "Size of vector " << vec1.size() << endl;

    for(int i : vec1){
        cout << i << endl;
    }

    /* front() to get first element */
    cout << "The first elemnt is : " << vec1.front() << endl;

    /* back() to get last element */
    cout << "The last elemnt is : " << vec1.back() << endl;

    /* at() to get element by position */
    cout  << "Display using at() function : " << endl;
    cout << vec1.at(0) << endl;
    cout << vec1.at(1) << endl;
    
    return 0;
}