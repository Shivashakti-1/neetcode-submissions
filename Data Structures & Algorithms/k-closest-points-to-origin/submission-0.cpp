class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     priority_queue<pair<int, vector<int>>> pq;

     for(auto num : points)
     {
        int x = num[0];
        int y = num[1];

        int p =(x*x) + (y*y);
        pq.push({p, num});

        if(pq.size()>k)
        {
            pq.pop();
        }
     } 

     vector<vector<int>> result;

     while(!pq.empty())
     {
        result.push_back(pq.top().second);
        pq.pop();
     } 

     return result; 
    }
};
