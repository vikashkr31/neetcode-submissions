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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        int l = -1;
        while(1) {
            if(q.empty()) break;
            vector<int> vec;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                cout<<q.size()<<endl;
                TreeNode* t = q.front();
                q.pop();
                vec.push_back(t->val); 
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            res.push_back(vec);
        }
        
        return res;
    }
};
