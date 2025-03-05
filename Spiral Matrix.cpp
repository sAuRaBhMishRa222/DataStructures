class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            if(matrix.size()==1) return matrix[0];
            vector<int> ans;
            int top=0;
            int bottom=matrix.size()-1;
            int left=0;
            int right=matrix[0].size()-1;
            while(top<=bottom && left<=right){
                for(int j=left;j<=right;j++){
                    ans.push_back(matrix[top][j]);
                }
                top++;
                for(int j=top;j<=bottom;j++){
                    ans.push_back(matrix[j][right]);
                }
                right--;
                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        ans.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                }
                if (left <= right) {
                    for (int i = bottom; i >= top; i--)
                        ans.push_back(matrix[i][left]);
                    left++;
                }
            }
            return ans;
        }
    };