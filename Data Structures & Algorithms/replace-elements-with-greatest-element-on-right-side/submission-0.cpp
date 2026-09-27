class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;
        
        vector<int>v2;
        int j=0;
        for(i=0;i<arr.size()-1;i++)
        {
                                      vector<int>v1(arr.begin()+j+1,arr.begin()+arr.size());
            v2.push_back(*max_element(v1.begin(),v1.end()));
            j++;
        }
        v2.push_back(-1);
        return v2;
    }
};