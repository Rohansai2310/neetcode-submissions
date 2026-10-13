class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int x;
        int i;
        int y;
        for(i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" &&tokens[i]!="-" &&tokens[i]!="*" &&tokens[i]!="/")
            {
                st.push(stoi(tokens[i]));
                
            }
            else
            {
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                   
                    x=x+y;
                    st.push(x);
                }
                else if(tokens[i]=="-")
                {
                    x=-x+y;
                    st.push(x);
                }
                else if(tokens[i]=="*")
                {
                    x=x*y;
                    st.push(x);
                }
                else if(tokens[i]=="/")
                {
                    x=y/x;
                    st.push(x);
                }
            }
        }
       
        return st.top();
    }
};
