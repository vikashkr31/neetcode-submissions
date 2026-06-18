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
    int findGoodNodes(TreeNode* root, int currMax){
        if(root == NULL) return 0;

        int l = findGoodNodes(root->left, max(currMax, root->val));
        int r = findGoodNodes(root->right, max(currMax, root->val));

        if(root->val >= currMax)
            return 1 + l+r;
        
        return l+r;
    }
    int goodNodes(TreeNode* root) {
        return findGoodNodes(root, -101);
    }
};
