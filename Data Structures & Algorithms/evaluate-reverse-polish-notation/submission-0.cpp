class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(auto str : tokens){
            if(str == "+" || str == "-" || str == "*" || str == "/"){
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();

                int res;
                if(str == "+")
                    res = num1+num2;
                else if (str == "-")
                    res = num2 - num1;
                else if(str == "*")
                    res = num1*num2;
                else
                    res = num2/num1;

                s.push(res);
            } else {
                s.push(stoi(str));
            }
        }

        return s.top();
    }
};
