class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>V,P,fin;
        int z=1;
        V.push_back(z);
        for(int i=0;i<nums.size();i++)
        {
            z*=nums[i];
            V.push_back(z);
        }
        z=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            z*=nums[i];
            P.push_back(z);
        }
        reverse(P.begin(), P.end());
        P.push_back(1);
        for(int i=0;i<V.size()-1;i++)
        {
            fin.push_back((long long)V[i]*P[i+1]);
        }

        return fin;
    }
};
