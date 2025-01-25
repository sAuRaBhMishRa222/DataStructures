class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(), nums1.end());
        int sizze=nums1.size();
        if(sizze%2==0){
            double a=nums1[sizze/2]+nums1[(sizze/2)-1];
            double b=a/2;
            return b;
        }
        else{
            double a=nums1[sizze/2];
            return a;
        }
        return 0;
    }
};