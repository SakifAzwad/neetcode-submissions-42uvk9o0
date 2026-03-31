class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>M;
        vector<vector<string>>V;
        string A,B;
        for (int i = 0; i < strs.size(); i++) {
            
            A = strs[i];
            B = A;
            sort(A.begin(), A.end());
            M[A].push_back(B);
        }
        
        for (int i = 0; i < strs.size(); i++) {
            A = strs[i];
            sort(A.begin(), A.end());
            if(M[A].size())
            {
                V.push_back(M[A]);
                M[A].clear();
            }
        }
        return V;
    }
};
