class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string dir="";

        for(int i=0;i<=path.size();i++)
        {
            if(i==path.size() || path[i]=='/')
            {
                if(dir=="..")
                {
                    if(!st.empty()){
                    st.pop();}
                }
                else if(dir != "" && dir != ".")
                {
                    st.push(dir);
                }
                dir="";
            }
            else{
                dir+=path[i];
            }
        }
        string res="";
        while(!st.empty()){
            res="/" + st.top() +res;
            st.pop();
        }

        return res.empty() ? "/" : res;
        
    }
};