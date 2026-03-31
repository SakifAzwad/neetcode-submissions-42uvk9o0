class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(), nums.end());
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int mx=0;
        int cnt=1;
        for (auto it = s.begin(); it != s.end(); ++it) {
        int curr = *it;
        auto nxt = next(it);
        int nexx;
        if (nxt != s.end()) {
             nexx = *nxt;
        }
        else break;
        if(nexx-curr==1)
        {
            cnt++;
        }
        else
        {
            mx=max(mx,cnt);
            cnt=1;
        }
        
    }
     mx=max(mx,cnt);

    return mx;


    }
};