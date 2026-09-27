class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<t.size())
        {
            if(s[j]==t[i])
            {
                s.erase(s.begin());
                
            }
            i++;
        }
        if(s.empty())
        {
            return true;
        }
        return false;
    }
};