class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string s = "123456789";
        vector<int> ans;

        int low_len = to_string(low).size();
        int high_len = to_string(high).size();

        for (int len = low_len; len <= high_len; len++) {

            for (int start = 0; start + len <= 9; start++) {

                int num = stoi(s.substr(start, len));

                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }

        return ans;
    }
};