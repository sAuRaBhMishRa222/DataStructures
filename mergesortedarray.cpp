class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //merge(nums1.end(),nums2.begin(),nums2.end());
        for(int i=m;i<m+n;i++){
            if(nums1[i]==0){
                nums1[i]=nums2[i-m];
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};