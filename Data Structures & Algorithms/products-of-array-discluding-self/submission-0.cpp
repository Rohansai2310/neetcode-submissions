class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>postfix(nums.size());
        vector<int>res(nums.size());
        int i;
        prefix[0]=1;
        postfix[nums.size()-1]=1;
        for(i=1;i<nums.size();i++)
        {
            prefix[i]=nums[i-1]*prefix[i-1];
            
        }
        for(i=nums.size()-2;i>=0;i--)
        {
            postfix[i]=nums[i+1]*postfix[i+1];
        }
        for(i=0;i<nums.size();i++)
        {
            res[i]=prefix[i]*postfix[i];
        }
        return res;
    }
};
