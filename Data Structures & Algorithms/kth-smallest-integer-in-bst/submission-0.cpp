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
    int findkthSmallest(TreeNode* root, int& k) {
        if(root==NULL) return -1;
        int l = findkthSmallest(root->left, k);
        if(l>=0) return l;
        k--;
        if(k==0) return root->val;
        int r = findkthSmallest(root->right, k);
        if(r>=0) return r;
    }
    int kthSmallest(TreeNode* root, int k) {
        return findkthSmallest(root, k);
    }
};
