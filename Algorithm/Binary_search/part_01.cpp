#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int st = 0, end = arr.size()-1;

    while (st <= end)
    {
        int mid = (st + end ) /2;

        if(target > arr[mid]) {
            st  = mid + 1;
        } else if(target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid+1;
        }
    }
    
    return -1;
}

int main() {
    vector<int> arr = {-7, -3, 0, 2, 5, 7, 10};
    int target = 7;

    cout << binarySearch(arr, target) << endl;

    return 0;
}