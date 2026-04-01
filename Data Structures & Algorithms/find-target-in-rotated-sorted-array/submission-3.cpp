class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,r=nums.size()-1,m;
        m=(r+l)/2;
        if(nums[m]==target)
                return m;
        while(r-l>1)
        {
            // cout<<m<<sp<<l<<sp<<r<<sp<<nums[m]<<endl;
            if(nums[m]==target)
                return m;
            else if(nums[l]==target)
                return l;
            else if(nums[r]==target)
                return r;

                if(nums[l]<nums[m] && target>=nums[l] && target<=nums[m]) r=m;
                else if(nums[m]<nums[r] && target>=nums[m] && target<=nums[r]) l=m;
                else if(nums[l]>nums[m]) r=m;
                else if(nums[m]>nums[r]) l=m;

            
            m=(r+l)/2;
        }
        return -1;
        
        
    }
       
};
