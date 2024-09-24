#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1); // Initializing with value 1

    // Prefix 
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suf = 1;

    // Suffix 
    for (int i = n - 2; i >= 0; i--) {
        suf *= nums[i + 1];
        ans[i] *= suf;
    }

    return ans;
}

int main() {
    vector <int> nums = {1, 2, 3, 4};
    vector <int> result = productExceptSelf(nums);

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}