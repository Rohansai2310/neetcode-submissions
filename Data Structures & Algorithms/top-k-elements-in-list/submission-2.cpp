class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>v1;
        vector<pair<int,int>>arr;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(const auto&p :mpp)
        {
            arr.push_back({p.second,p.first});
        }
        sort(arr.rbegin(),arr.rend());
        for(i=0;i<k;i++)
        {
            v1.push_back(arr[i].second);
        }
        return v1;
    }
};
