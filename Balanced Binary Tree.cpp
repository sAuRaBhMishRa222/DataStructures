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
    public:
        int balanceFactor(TreeNode* root){
            if(!root) return 0;
            int leftHeight=balanceFactor(root->left);
            int rightHeight=balanceFactor(root->right);
            return 1+max(leftHeight,rightHeight);
        }
        bool isBalanced(TreeNode* root) {
            if(!root) return true;
            int leftHeight=balanceFactor(root->left);
            int rightHeight=balanceFactor(root->right);
            if(abs(leftHeight-rightHeight)>1) return false;
            return isBalanced(root->left) && isBalanced(root->right);
        }
    };