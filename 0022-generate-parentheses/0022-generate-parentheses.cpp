class Solution {
public:
    vector<string> ans;

    void helper(int n, int oc, int cc, string s)
    {
        if (oc == n && cc == n)
        {
            ans.push_back(s);
            return;
        }

        if (oc < n)
        {
            helper(n, oc + 1, cc, s + "(");
        }

        if (cc < oc)
        {
            helper(n, oc, cc + 1, s + ")");
        }
    }

    vector<string> generateParenthesis(int n)
    {
        helper(n, 0, 0, "");
        return ans;
    }
};