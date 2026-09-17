class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int i=0;
        int j = heights.size()-1;

        while(i<j)
        {
            int wet = 0;
            if(heights[i]<heights[j])
            {
              wet = heights[i]*(j-i);
              i++;
            }  

            else{
                wet= heights[j]*(j-i);
                j--;
            } 
            area = max(area, wet);         
        }
        return area;
    }
};
