class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);

        for(char task : tasks)
        {
            freq[task-'A']++;
        }        

        priority_queue<int> pq;

        for(int f : freq)
        {
            if(f>0)
            {
                pq.push(f);
            }
        }

        int count =0;

        while(!pq.empty())
        {
            vector<int> used;

            for(int i=0;i<=n;i++)
            {   if(!pq.empty()){
                int f=pq.top();
                pq.pop();
                f--;

                if(f>0)
                {
                    used.push_back(f);
                }
            }

            count++;
            if(pq.empty()&&used.empty())
            {
                break;
            }
            }

            for(int f : used)
            {
                pq.push(f);
            }
        }
        return count;
    }
};
