#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> index;
    for (int i = 0; i < nums.size(); i++) {
        index.push_back({nums[i], i});
    }

    sort(index.begin(), index.end());

    int start = 0;
    int end = index.size() - 1;

    while (start < end) {
        int sum = index[start].first + index[end].first;

        if (sum == target) {
            return {index[start].second, index[end].second};
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
