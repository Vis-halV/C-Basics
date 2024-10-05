#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();
    
    // Cases with only one element
    if (n == 1) return A[0];

    int st = 0, end = n - 1;

    // Corner case for the first and last elements
    if (A[0] != A[1]) return A[0];          // First element 
    if (A[n-1] != A[n-2]) return A[n-1];    // Last element

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (A[mid-1] != A[mid] && A[mid] != A[mid+1]) {
                return A[mid]; // Found the unique element
        }

        // Binary search logic
        if (mid % 2 == 0) { // EVEN
            if (A[mid] == A[mid+1]) {  // Pair on the right
                st = mid + 2;
            } else {                   // Unique element on the left
                end = mid - 1;
            }
        } else { // ODD
            if (A[mid] == A[mid-1]) {  // Pair on the left
                st = mid + 1;
            } else {                   // Unique element on the right
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    vector<int> A = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    singleNonDuplicate(A);

    return 0;
}