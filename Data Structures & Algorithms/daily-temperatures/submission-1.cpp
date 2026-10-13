class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int i;
        int n=temperatures.size();
        vector<int>v1(n,0);
  
        for(i=temperatures.size()-1;i>=0;i--)
        {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            {
                st.pop();
            }
            
           if(!st.empty())
           {
            v1[i]=st.top()-i;
           }
           st.push(i);

           
        }
        return v1;
    }
};
