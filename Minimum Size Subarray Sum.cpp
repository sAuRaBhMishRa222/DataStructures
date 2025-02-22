class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            // sort(nums.begin(),nums.end());
            int l=0,sum=0;
            int minSubset=INT_MAX;
            for(int i=0;i<nums.size();i++){
                    sum+=nums[i];
                    while(sum>=target){
                        int temp= i-l+1;
                        minSubset=min(temp,minSubset);
                        sum -= nums[l];  // Remove leftmost element
                        l++; 
                    } 
            }
            if(minSubset==INT_MAX) return 0;
            return minSubset;
            
    
        }
    };