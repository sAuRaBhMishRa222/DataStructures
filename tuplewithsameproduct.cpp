class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int result = 0;
        int n = nums.size();
        
        // Compute all pairwise products
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int product = nums[i] * nums[j];
                result += 8 * productCount[product];  // Each pair contributes 8 permutations
                productCount[product]++;
            }
        }
        return result;
    }
};