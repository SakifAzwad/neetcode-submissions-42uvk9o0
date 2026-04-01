class Solution {
public:
    int findMin(vector<int> &nums) {

        int l=0,r=nums.size(),m;
        m=(r+l)/2;
        while(l<r)
        {
            if(nums[m]>nums[nums.size()-1])
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
            m=(r+l)/2;
        }
        return nums[l];
        
        
    }
};
