class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> M;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            M[nums[i]]++;
        }
        set<vector<int>> s;
        for (int i = 0; i < nums.size(); i++) {

            M[nums[i]]--;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++) {

                int sum = nums[i] + nums[j];

                M[nums[j]]--;
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    M[nums[j]]++;
                    continue;
                }
                    
                int ex = sum * -1;
                if (M[ex]) {
                    vector<int> aa;
                    aa.push_back(nums[i]);
                    aa.push_back(nums[j]);
                    aa.push_back(ex);
                    sort(aa.begin(), aa.end());
                    s.insert(aa);
                    // cout<<nums[i]<<" "<<nums[j]<<" "<<ex<<endl;
                }
                
                M[nums[j]]++;
            }
            M[nums[i]]++;
        }
        vector<vector<int>> v(s.begin(), s.end());

        return v;
    }
};