class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c =0;
        for ( int i =0; i<prices.size()-1;i++)
        {
                int diff=prices[i+1]-prices[i];
                if ( diff>0)
                {
                    c=c+diff;
                }
        }
        return c;
        
    }
};