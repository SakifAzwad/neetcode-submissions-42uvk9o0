class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>M;
        int mx=0,j=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            M[s[i]]++;
            mx=max(mx,M[s[i]]);
            while((i-j+1)-mx > k)
            {
                M[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};