class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,r=nums.size(),m;
        m=(r+l)/2;
        while(l<r)
        {
            // cout<<m<<sp<<l<<sp<<r<<sp<<nums[m]<<endl;
            if(nums[m]==target)
                return m;


            if((nums[m]<=target && nums[r-1]>=target) || (nums[l]>target && nums[m]>target))
                l=m;
            else
                r=m;
            m=(r+l)/2;
        }
        return -1;
        
        
    }
};
