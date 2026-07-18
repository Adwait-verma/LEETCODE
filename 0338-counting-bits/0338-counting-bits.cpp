class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> z(n+1);
        int c=0;
        for ( int i =0;i<n+1;i++)
        {
            unsigned int x= static_cast<unsigned int >( i);
            while( x>0)
            {
                if( x&1)
                {
                    c=c+1;
                }
            
            x=x>>1;}
            z[i]=c;
            
            c=0;

        }
        return z;
        
    }
};