#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long totalPairs = n * (n - 1) / 2;
        unordered_map<int, long long> freq;
        long long goodPairs = 0;

        for (int j = 0; j < n; ++j) {
            int key = nums[j] - j;
            if (freq.contains(key)) {
                goodPairs += freq[key];
            }
            freq[key]++;
        }

        return totalPairs - goodPairs;
    }
};
