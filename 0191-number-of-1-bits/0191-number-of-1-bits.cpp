class Solution {
public:
    int hammingWeight(int n) {

        unsigned int x = static_cast<unsigned int>(n);
        int c=0;
        while( x>0)
        {
             if ( x&1)
             {
                c=c+1;
             }
             x=x>>1;
        }
        return c;
        
    }
};