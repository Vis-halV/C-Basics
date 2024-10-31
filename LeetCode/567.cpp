#include <iostream>
#include <cstring>
#include <map>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;

    int freq[26] = {0};
    int windFreq[26] = {0};

    // First for loop: Calculate frequency of each character in s1
    for (char c : s1) freq[c - 'a']++;

    int windSize = s1.length();

    // Second for loop: Populate the initial window frequency in s2
    for (int i = 0; i < windSize; i++) windFreq[s2[i] - 'a']++;

    // Third for loop: Slide the window across s2 and check for matches
    for (int i = windSize; i <= s2.length(); i++) {
        if (isFreqSame(freq, windFreq)) return true;

        if (i < s2.length()) {
            windFreq[s2[i - windSize] - 'a']--;  // Remove character going out of the window
            windFreq[s2[i] - 'a']++;             // Add new character coming into the window
        }
    }

    return false;
}

int main() {
    // Example 1
    string s1 = "ab", s2 = "eidbaooo";
    cout << "Example 1:\nString 1: " << s1 << "\nString 2: " << s2 << endl;
    if (checkInclusion(s1, s2)) 
        cout << "Output: True" << endl;
    else 
        cout << "Output: False" << endl;

    // Example 2
    s1 = "ab", s2 = "eidboaoo";
    cout << "\nExample 2:\nString 1: " << s1 << "\nString 2: " << s2 << endl;
    if (checkInclusion(s1, s2)) 
        cout << "Output: True" << endl;
    else 
        cout << "Output: False" << endl;

    return 0;
}
