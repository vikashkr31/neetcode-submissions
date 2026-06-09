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
            open++;
            genPrarenthesis(n, open, close, s, ans);
            s.pop_back();
            open--;
        } 
        if(open>close) {
            s.push_back(')');
            close++;
            genPrarenthesis(n, open, close, s, ans);
            s.pop_back();
            close--;
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s ="";
        genPrarenthesis(n, 0, 0, s, ans);

        return ans;
    }
};
