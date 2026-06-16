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
    bool dfs(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(!(root && subRoot)) return false;
        if(root->val != subRoot->val) return false;

        return dfs(root->left, subRoot->left) && dfs(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()) {
            TreeNode* temp  = s.top();
            s.pop();
            if(temp->val == subRoot->val){
                if(dfs(temp, subRoot))
                    return true;
            }

            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
        }
        return false;
    }
};
