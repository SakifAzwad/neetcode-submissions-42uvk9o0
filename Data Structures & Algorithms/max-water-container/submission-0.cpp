class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int x=height[i];
            int y=height[j];
            int z=min(x,y);
            int fin=z*(j-i);
            mx=max(mx,fin);
            if(x<=y)i++;
            else j--;
        }
        return mx;
    }
};