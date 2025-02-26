#include <vector>
using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0, min_sum = 0, max_ans = 0, min_ans = 0;

        for (int num : nums) {
            max_sum = max(num, max_sum + num);  // Kadane for max subarray sum
            min_sum = min(num, min_sum + num);  // Kadane for min subarray sum
            max_ans = max(max_ans, max_sum);
            min_ans = min(min_ans, min_sum);
        }

        return max(max_ans, abs(min_ans));  // Return max absolute sum
    }
};
