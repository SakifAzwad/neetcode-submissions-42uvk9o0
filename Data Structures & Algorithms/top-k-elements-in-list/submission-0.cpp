class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>M,N;
        for(int i=0;i<nums.size();i++)
        {
            M[nums[i]]++;
        }
        vector<pair<int,int>>V;
        vector<int>P;
        for(auto i:M)
        {
            V.push_back({i.second,i.first});
        }
        sort(V.begin(),V.end(),greater<>());
        for(int i=0;i<k;i++)
        {
            P.push_back(V[i].second);
        }
        return P;

    }
};
