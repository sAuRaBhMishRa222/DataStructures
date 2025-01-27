/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* BST(vector<int>& nums, int s, int e){
        if(s>e) return NULL;
        int mid=s+(e-s)/2;
        TreeNode *newNode = new TreeNode(nums[mid]);
        newNode->left=BST(nums,s,mid-1);
        newNode->right=BST(nums,mid+1,e);
        return newNode;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
       return BST(nums, s, e);
    }
};