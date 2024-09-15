#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for( int i : nums) {
            ans ^= i; // Bitwise X-OR operator eliminates same value to 0

        }
        return ans;
    } 
};

int main() {
    Solution  s;
    vector<int> nums = {1, 2, 4, 2, 1};
    cout << "The unique/single number is " << s.singleNumber(nums) << endl;

    return 0;
}
