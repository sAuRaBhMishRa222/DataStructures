class Solution {
    public:
        bool isValidBST(TreeNode* root, long long minVal, long long maxVal) {
            if (root == nullptr) return true;
            if (root->val <= minVal || root->val >= maxVal) return false;
            return isValidBST(root->left, minVal, root->val) && isValidBST(root->right, root->val, maxVal);
        }
    
        bool isValidBST(TreeNode* root) {
            return isValidBST(root, LLONG_MIN, LLONG_MAX);
        }
    };
    