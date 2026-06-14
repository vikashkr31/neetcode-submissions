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
    int maxPSum(TreeNode* root, int& res) {
        if(root == NULL) return 0;

        int l = max(maxPSum(root->left, res),0);
        int r = max(maxPSum(root->right, res),0);

        res = max(res, root->val + l + r);

        return root->val + max(l, r);
    }

    int maxPathSum(TreeNode* root) {
        int res = root->val;
        maxPSum(root, res);

        return res;
    }
};
