class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            priority_queue<int> pq(nums.begin(),nums.end());
            int temp1=pq.top();
            pq.pop();
            int temp2=pq.top();
            int ans=(temp2-1)*(temp1-1);
            return ans;
    
        }
    };