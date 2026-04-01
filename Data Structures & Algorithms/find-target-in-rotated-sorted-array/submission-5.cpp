class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,r=nums.size()-1,m;
        m=(r+l)/2;
    
        while(l<=r)
        {
            // cout<<m<<sp<<l<<sp<<r<<sp<<nums[m]<<endl;
            if(nums[m]==target)
                return m;

                if(nums[l]<=nums[m] && target>=nums[l] && target<nums[m]) r=m-1;
                else if(nums[m]<=nums[r] && target>nums[m] && target<=nums[r]) l=m+1;
                else if(nums[l]>nums[m]) r=m-1;
                else l=m+1;

            
            m=(r+l)/2;
        }
        return -1;
        
        
    }
       
};
