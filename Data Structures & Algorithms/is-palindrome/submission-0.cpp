class Solution {
public:
    bool isPalindrome(string s) {
        string A = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
                A += s[i];
        }
        string B = A;
        reverse(B.begin(), B.end());
        if (A == B)
            return true;
        return false;
    }
};