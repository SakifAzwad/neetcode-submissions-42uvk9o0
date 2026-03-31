class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>S;
        for(int i=0;i<nums.size();i++)
        {
            S.insert(nums[i]);
        }
        if(S.size()==nums.size())return false;
        return true;
    }
};