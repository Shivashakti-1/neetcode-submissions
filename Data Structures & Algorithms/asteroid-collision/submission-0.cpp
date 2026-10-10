class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int as : asteroids)
        {
            bool d=false;

            while(!st.empty() && st.back()>0 && as<0)
            {
                if(st.back()<-as)
                {
                    st.pop_back();
                    continue;
                }
                else if(st.back()==-as)
                {
                    st.pop_back();
                    d=true;
                    break;
                }
                else{
                    d=true;
                    break;
                }
            }
            if(!d)
            {
                st.push_back(as);
            }
        }
        return st;
        
    }
};