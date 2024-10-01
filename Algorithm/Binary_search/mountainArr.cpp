#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st = 1, end = arr.size() - 2;  // Start from 1, end at size-2 to avoid boundary issues

    while(st <= end) {
        int mid = st + (end - st) / 2;

        // Safely check peak conditions without out-of-bounds access
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;  // Peak found
        } else if (arr[mid] > arr[mid - 1]) {
            st = mid + 1;  // Move to the right
        } else {
            end = mid - 1;  // Move to the left
        }
    }

    return -1;  // This will never be reached due to the problem guarantee of a peak
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 7, 5, 3};
    cout << peakIndexInMountainArray(arr) << endl;

    return 0;

}
