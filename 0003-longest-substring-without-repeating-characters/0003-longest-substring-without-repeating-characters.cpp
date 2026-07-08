class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set <char> a;
        int b=0;
        int left =0;
        for ( int i =0; i < s.size();i++)
        {
            while ( a.find ( s[i])!= a.end())
            {
                    a.erase(s[left]);
                    left++;

            }
            a.insert(s[i]);
            b=max(b, i -left+1);
            
        }
        return b;
    }
};