class Solution {
public:
    void genPrarenthesis(int n, int open, int close, string s, vector<string>& ans)
    {
        if(close == n) {
            ans.push_back(s);
            return;
        }

        if(open<n) {
            s.push_back('(');
            genPrarenthesis(n, open+1, close, s, ans);
            s.pop_back();
        } 
        if(open>close) {
            s.push_back(')');
            genPrarenthesis(n, open, close+1, s, ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s ="";
        genPrarenthesis(n, 0, 0, s, ans);
        return ans;
    }
};
