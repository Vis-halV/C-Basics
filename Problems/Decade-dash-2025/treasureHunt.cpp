#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void canReach(vector<int>& clues, int start) {
    int n = clues.size();
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (clues[current] == 0) {
            cout << "true" << endl;
            return;
        }

        if (visited[current]) {
            continue;
        }
        visited[current] = true;

        int nextPos1 = current + clues[current];
        int nextPos2 = current - clues[current];

        if (nextPos1 >= 0 && nextPos1 < n && !visited[nextPos1]) {
            q.push(nextPos1);
        }
        if (nextPos2 >= 0 && nextPos2 < n && !visited[nextPos2]) {
            q.push(nextPos2);
        }
    }

    cout << "false" << endl;
}

int main() {
    int n, start;
    cin >> n;
    vector<int> clues(n);
    for (int i = 0; i < n; ++i) {
        cin >> clues[i];
    }
    cin >> start;
    canReach(clues, start);
    return 0;
}

/*Imagine you are on a treasure hunt adventure in a mysterious land represented by an array of clues, each associated with a non-negative integer. The array, called clues, provides directions to the next clue or challenge. Your starting point is at the index indicated by the start parameter. When you stand at index i, you can take a leap to either i + clues[i] or i - clues[i]. Your goal is to determine whether, through a series of jumps based on the given clues, you can uncover a treasure marked by a clue with a value of 0.

However, there's a catch – you cannot jump beyond the boundaries of the array at any point in your quest.

Input: clues = [4,2,3,0,3,1,2], start = 5

Output: true

Explanation:

All possible ways to reach at index 3 with value 0 are:

index 5 -> index 4 -> index 1 -> index 3

index 5 -> index 6 -> index 4 -> index 1 -> index 3

Example 2:

Input: arr = [4,2,3,0,3,1,2], start = 0

Output: true

Explanation:

One possible way to reach at index 3 with value 0 is: index 0 -> index 4 -> index 1 -> index 3

Example 3:

Input: arr = [3,0,2,1,2], start = 2

Output: false

Explanation: There is no way to reach at index 1 with value 0.

Input Format

5 3 0 2 1 2

Constraints

1<=N<=10^4

0<=arr[i]<=10^4

Output Format

false

Sample Input 0

7
5
4
2
3
0
3
1
2
Sample Output 0

true
Explanation 0

the first line signifies the length of the array
the second line signifies the starting postion of your tresure hunt
Output: true

Explanation:

All possible ways to reach at index 3 with value 0 are: index 5 -> index 4 -> index 1 -> index 3 index 5 -> index 6 -> index 4 -> index 1 -> index 3

return true or false in string format('true' or 'false')
the starting position signifies the zero based index
Sample Input 1

5
2
3
0
2
1
2
Sample Output 1

false
Explanation 1

Output: false Explanation: There is no way to reach at index 1 with value 0 starting at the position 2.

the starting position signifies the zero based index */