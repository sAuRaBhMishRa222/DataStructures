class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0, j=n-1;
        int area=0;
        while(i<j){
            int diff=j-i;
            int small=min(height[i],height[j]);
            area=max(small*diff,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};