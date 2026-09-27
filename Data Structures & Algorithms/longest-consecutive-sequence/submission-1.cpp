class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>unique_set(nums.begin(),nums.end());
        vector<int>v1;
        int max_count=0;
        nums.assign(unique_set.begin(),unique_set.end());
        int count=0;
        int i;
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                count=count+1;
                if(max_count<count)
                {
                    max_count=count;
                }
               
            }
            else if(nums[i]!=nums[i-1]+1)
            {
                count=0;
            }
        }
        return max_count+1;
    }
};
