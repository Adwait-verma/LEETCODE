class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int>> pq;
        for ( int stone:stones)
        {
            pq.push ( stone);
        }
        while( pq.size()!=1)
        {
            int a=pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            if ( a==b)
            {
                if ( pq.size()==0)
                {
                    return 0;
                    break;
                }
            }
            else
            {
                int c=a-b;
                pq.push(c);
            }
        }
        return pq.top();
        
    }
};