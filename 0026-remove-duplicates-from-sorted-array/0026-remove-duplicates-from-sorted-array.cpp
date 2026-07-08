/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int insertIndex = 1;
        map <int , int > mp;


        for (int i = 0; i < nums.size(); i++) {

            if (mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]++;
            }
            
        }
        nums.clear();
        for (auto it : mp) {
            nums.push_back(it.first);
            }
            
        return nums.size();
    }
};
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty()) return 0;

        int insertIndex = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }

        return insertIndex;
    }
};