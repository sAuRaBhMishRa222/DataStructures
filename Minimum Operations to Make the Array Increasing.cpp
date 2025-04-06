class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int minOper=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<nums[i+1]) continue;
                else{
                    int temp=nums[i]-nums[i+1];
                    minOper+=temp+1;
                    nums[i+1]=nums[i]+1;
                }
            }
            return minOper;
        }
    };