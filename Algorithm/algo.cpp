#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());

    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Max_element : " << *(max_element(vec.begin(), vec.end())) << endl;
    cout << "Min_element : " << *(min_element(vec.begin(), vec.end())) << endl;

    cout << "Max of 4 and 5 : " << max(4,5) << endl;
    cout << "Min of 4 and 5 : " << min(4,5) << endl;

    int a = 6, b = 9;
    cout << "Before swap a = " << a << " and b = " << b << endl;
    swap(a,b);
    cout << "After swap a = " << a << " and b = " << b << endl;

    return 0;
}