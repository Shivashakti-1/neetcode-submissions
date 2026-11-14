class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;

        for(int num : nums)
        {
            if(val!=num)
            {
                k++;
            }
        }        
        return k;
    }
};