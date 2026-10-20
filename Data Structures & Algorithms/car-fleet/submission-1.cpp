class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> v;

        for(int i=0;i<position.size();i++)
        {
            double t = (double)(target-position[i])/speed[i];
            v.push_back({position[i], t});
        } 

        sort(v.begin(), v.end(), [](pair<int, double>& a, pair<int, double>& b){return a.first>b.first;});

        stack<double> st;

        for(auto car : v)
        {
            double time = car.second;
            if(st.empty() || time>st.top())
            {
                st.push(time);
            }
        }
        return st.size();
        
    }
};
