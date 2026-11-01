class Solution {
public:
    void solve(int ind,int n, int k, vector<vector<int>> &ans,vector<int> &curr)
    {
        if(curr.size()==k)
        {
            ans.push_back({curr});
            return;
        }
        for(int i=ind;i<=n;i++)
        {
            curr.push_back(i);
            solve(i+1,n,k,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;   
        vector<int> curr;

        solve(1,n,k,ans,curr);

        return ans;     
    }
};