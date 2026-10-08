class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         vector<pair<int, int>> temp;

        for (int i = 0; i < arr.size(); i++) {
            temp.push_back({abs(arr[i] - x), arr[i]});
        }

        sort(temp.begin(), temp.end());

        vector<int> res;

        for (int i = 0; i < k; i++) {
            res.push_back(temp[i].second);
        }

        sort(res.begin(), res.end());

        return res;                
    }
};