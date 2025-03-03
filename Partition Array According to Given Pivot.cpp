class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> left,middle,right;
            for(int em:nums){
                if(em>pivot) right.push_back(em);
                if(em<pivot) left.push_back(em);
                if(em==pivot) middle.push_back(em);
            }
            left.insert(left.end(),middle.begin(),middle.end());
            left.insert(left.end(),right.begin(),right.end());
            return left;
        }
    };