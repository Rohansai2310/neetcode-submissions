class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(nums);
        int i;
        nums.insert(nums.begin(),ans.begin(),ans.end());
        return nums;
    }
};