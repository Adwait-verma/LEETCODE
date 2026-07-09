class Solution {
public:
    int mySqrt(int x) {


        int l=0;
        int r=x;
        long long m;
        int ans;
        while ( l<=r)
        {
            m =l+(r-l)/2;
            if ( m*m==x)
            {
                ans=m;
                return ans;

            }
            else if( m*m<x)
            {
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return ans;
        
    }
};