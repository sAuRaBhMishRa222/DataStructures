class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int i=0,j=nums.size()-1;
            int lt=0;
            while(i<=j){
                if(nums[i]<1){
                    swap(nums[i],nums[lt]);
                    i++;
                    lt++;
                }
                else if(nums[i]>1){
                    swap(nums[i],nums[j]);
                    j--;
                }
                else i++;
            }
        }
    };