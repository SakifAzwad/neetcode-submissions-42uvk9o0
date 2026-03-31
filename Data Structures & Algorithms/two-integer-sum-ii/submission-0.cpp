class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>M;
        for(int i=0;i<numbers.size();i++)
        {
            M[numbers[i]]=i+1;
        }
        vector<int>V;
        for(int i=0;i<numbers.size();i++)
        {
            int x=target-numbers[i];
            if(M[x])
            {
                int p=i+1;
                int q=M[x];
                if(p==q)continue;
                else
                {
                    V.push_back(p);
                    V.push_back(q);
                    return V;
                }
            }
        }
        return V;
    }
};