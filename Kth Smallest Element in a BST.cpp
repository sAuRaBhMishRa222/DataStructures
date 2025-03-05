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
        vector<int> res;
        vector<int> inorderTraversal(TreeNode* root) {
            if(root != NULL){
                inorderTraversal(root->left);
                res.push_back(root->val);
                inorderTraversal(root->right);
            }
            return res;
        }
        int kthSmallest(TreeNode* root, int k) {
            vector<int> res = inorderTraversal(root);
            return res[k-1];
        }
    };