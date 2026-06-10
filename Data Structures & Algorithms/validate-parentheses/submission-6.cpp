class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> m;
        stack<char> st;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';

        for(int i =0;i<s.length();i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
                st.push(s[i]);
            else {
                if(st.empty())
                    return false;
                char c = st.top();
                st.pop();
                if(c!=m[s[i]])
                    return false;
            }
        }
        if(!st.empty())
            return false;

        return true;
    }
};
