class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int l =0;
        int z=0;
        sort(people.begin(), people.end());
        int r = people.size()-1;
        while (l <= r)
        {
            if ( people[l]+people[r]<= limit)
            {
                l++;
                r--;

            }
        else
        {
            r--;
        }
        z++;
        
        
        }
        return z;
        
    }
};