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
    int ans;
    int l;
    int h;
    void *sh(TreeNode* node) {
        if(node->right != NULL)
            sh(node->right);
        if(node->val >= l && node->val <= h)
        ans += node->val;
        if(node->left != NULL)
            sh(node->left);
        return 0;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans = 0;
        l = low;
        h = high;
        sh(root);
        return ans;
    }
};