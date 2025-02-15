class Solution {
    public:
        int fillCups(vector<int>& amount) {
            priority_queue<int> pq(amount.begin(),amount.end());
            int res=0;
            if(pq.top()==0) return 0;
            while(pq.size()==3){
                int count1Cup=pq.top(); pq.pop();
                int count2Cup=pq.top(); pq.pop();
                count1Cup--;
                count2Cup--;
                if(count1Cup>0) pq.push(count1Cup);
                if(count2Cup>0) pq.push(count2Cup);
                res++;
            }
            res+=pq.top();
            return res;
    
        }
    };