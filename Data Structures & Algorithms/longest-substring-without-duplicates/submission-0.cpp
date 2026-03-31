class Solution {
public:
int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>M;
        if(!s.size())return 0;
        // s.erase(unique(s.begin(), s.end()), s.end());
        int cur,i,cnt=0;
        int ans=1,last=0;
        bool f=0;
        for( i=0;i<s.size();i++)
        {
            cur=M[s[i]];
            if(cur)
            {
                
                ans=max(ans,i-last);
                // cout<<cur<<sp<<ans<<sp<<i<<endl;
                last=cur;
                M.clear();
                i=cur-1;
                continue;
            }
            else
            {
                M[s[i]]=i+1;
            }

        }
        ans=max(ans,i-last);
        
        
        return ans;
    }
    
};