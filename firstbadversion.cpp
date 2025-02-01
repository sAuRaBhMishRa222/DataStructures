class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while (l < r) {  
            int mid = l + (r - l) / 2; // Prevents overflow
            if (isBadVersion(mid)) {
                r = mid; // Search left half
            } else {
                l = mid + 1; // Search right half
            }
        }
        return l; // First bad version
    }
};
