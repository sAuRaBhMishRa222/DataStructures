class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int div=nums.size()/2;
            unordered_map<int,int> map;
            for(int num:nums){
                map[num]++;
            }
            for(auto &pa:map){
                if(pa.second%2!=0) return false;
            }
            return true;
        }
    };