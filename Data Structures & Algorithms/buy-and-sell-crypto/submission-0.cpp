class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        if(prices.size()==1)return 0;
        
        int aa=100000;
        int bb=0;

        
        for(int i=1;i<prices.size();i++)
        {
            aa=min({aa,prices[i],prices[i-1]});
            
            mx=max(mx,prices[i]-aa);
        }

        return mx;
    }
};