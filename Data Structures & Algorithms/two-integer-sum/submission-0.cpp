class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int>M;
        vector<int>V;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(M[target-x])
            {
                V.push_back(M[target-x]-1);
                V.push_back(i);
                return V;
            }
            
            M[x]=i+1;
            
        }
        return V;
    }
};
