#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int>& nums){ // O(n)
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        } else if(nums[mid] == 1){
            mid++;
        } else {    //2
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {};

    return 0;
}