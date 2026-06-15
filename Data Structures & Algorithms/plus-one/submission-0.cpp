class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i;
        for(i = n-1;i>=0;i--){
            if(digits[i] != 9) break;
        }
        if(i<0){
            digits[0] = 1;
            for(int j = 1; j<n;j++)
                digits[j] = 0;
            
            digits.push_back(0);
        }
        else{
            digits[i]++;
            for(int j = i+1; j<n;j++)
                digits[j] = 0;
        }
        return digits;
    }
};
