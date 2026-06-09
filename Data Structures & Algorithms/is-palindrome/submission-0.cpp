class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r= s.length()-1;

        while(l<r) {
            while(l<r){
                if((s[l] >=64 && s[l]<=90) || (s[l] >= 97 && s[l]<= 123) || (s[l] >= 48 && s[l]<= 57))
                    break;

                l++;
            }

            while(l<r){
                if((s[r] >=64 && s[r]<=90) || (s[r] >= 97 && s[r]<= 123) || (s[r] >= 48 && s[r]<= 57))
                    break;

                r--;
            }

            char left = s[l];
            char right = s[r];

            if(s[l] >=64 && s[l]<=90)
                left = s[l] + 32;

            if(s[r] >=64 && s[r]<=90)
                right = s[r] + 32;

            if(left != right)
                return false;

            l++;
            r--;
        }

        return true;
    }
};
