class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v1;
        for(char c:s)
        {
            if(isalnum(c))
            {
                v1.push_back(tolower(c));
            }
        }
      
        int l=0;
        int r=v1.size()-1;
        while(l<r)
        {
            if(v1[l]==v1[r])
            {
                l++;
                r--;

            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
