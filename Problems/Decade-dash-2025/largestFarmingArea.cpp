#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestFarmingArea(vector<int> fertility_level) {
    int n = fertility_level.size();
    int max_area = 0;

    //Using sliding window approach 

    for (int i = 0; i < n; i++) {
        int min_fertility = fertility_level[i];
        for (int j = i; j < n; j++) {
            min_fertility = min(min_fertility, fertility_level[j]);
            int area = min_fertility * (j - i + 1);
            max_area = max(max_area, area);
        }
    }

    return max_area;
}

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 10000) {
        cout << "Invalid number of zones. n must be between 1 and 10000." << endl;
        return -1;
    }

    vector<int> fertility_level(n);
    for (int i = 0; i < n; i++) {
        cin >> fertility_level[i];

        if (fertility_level[i] < 1 || fertility_level[i] > 10000) {
            cout << "Invalid fertility level at index " << i << ". Fertility level must be between 1 and 10000." << endl;
            return -1;
        }
    }

    int result = largestFarmingArea(fertility_level);
    cout << result << endl;

    return 0;
}



/*In a remote and rugged region, a team of environmental engineers is studying the fertility of a riverbank to decide which segments should be prioritized for farming. The riverbank is divided into multiple zones, each with varying soil fertility levels. Some zones are rich in nutrients, while others are less fertile. Each zone can only sustain crops effectively when the fertility level is within a certain threshold. You are given an array representing the fertility levels of each zone in a particular section of the riverbank, where each value corresponds to the soil's fertility at a specific zone.

The engineers want to maximize the contiguous section of the riverbank that can be utilized for crops, and they aim to select a segment of the riverbank where the least fertile zone determines the total productive area for farming. The goal is to identify the largest contiguous segment of the riverbank that can be used for farming, based on the fertility levels.

You must determine the largest area of land that can be farmed, where the area is determined by the width of the selected contiguous section of the riverbank and the fertility level of the least fertile zone within that section.

Problem Breakdown:

• Input: You are given an array where each element represents the fertility level (in terms of nutrient density) of a zone along the riverbank. The number of zones NNN is provided, and each zone is placed at an equal distance from the others.

• Output: Return the maximum area of land that can be used for farming based on the fertility levels of the zones. The area is determined by both the width (number of contiguous zones) and the fertility level of the least fertile zone in that segment.

Example 1:

Input: N = 6, fertility_level = [2, 1, 5, 6, 2, 3]

Output:10

Explanation: • The riverbank is divided into six zones with different fertility levels. To maximize the farming area, the engineers need to select a contiguous section of the riverbank where the least fertile zone dictates the farming capacity. The optimal selection here is the section that spans from the third zone with a fertility level of 5 to the fourth zone with a fertility level of 6. The farming area for this section is 5×2=10.

Input Format

6 2 1 5 6 2 3

Constraints

1<=n<=10^4 1<=fertility_level[i]<=10^4

Explanation 

The first line signifies the size of the array
-The riverbank is divided into six zones with different fertility levels. To maximize the farming area, the engineers need to select a contiguous section of the riverbank where the least fertile zone dictates the farming capacity. The optimal selection here is the section that spans from the third zone with a fertility level of 5 to the fourth zone with a fertility level of 6. The farming area for this section is 5×2=10.*/
