class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     map<int,int> cou;
    //     for (int num:nums){
    //         if(cou.count(num)){
    //             cou[num]+=1;
    //         }
    //         else{
    //             cou[num]=1;
    //         }
    //     }
    //     int count=0;
    //     for(auto& ag:cou){
    //         count+=1;
    //     }
    //     return count;
            int n=nums.size();
            int i=0,j=1;
            while(j<n){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
                else{
                    j++;
                }
            }
            nums.erase(nums.begin()+i+1,nums.end());
            int a=nums.size();
            return a;
    }
};