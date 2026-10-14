class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mpp[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(target==nums[m])
            {
               auto it=mpp.find(target);
                if(it !=mpp.end())
                {
                    return it->second;
                }
            }
            else if(target>nums[m])
            {
                l=m+1;
            }
            else if(target<nums[m])
            {
                r=m-1;
            }
            
        }
        return -1;
        

      
    }
};
