#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1); 
    vector<int> pre(n, 1); 
    vector<int> suf(n, 1);

    // Prefix
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] * nums[i-1];
    } 

    // Suffix
    for(int i = n-2; i >= 0; i--) {
        suf[i] = suf[i+1] * nums[i-1];
    }      

    // Answer
    for(int i = 0; i < n; i++) {
        ans[i] = pre[i] * suf[i];
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