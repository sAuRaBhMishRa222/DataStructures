class Solution {
    public:
        int minStoneSum(vector<int>& piles, int k) {
            priority_queue<int> pq(piles.begin(),piles.end());
            int ans=0;
            while(k>0){
                int top = pq.top();
                pq.pop();
                pq.push(top-floor(top / 2));
                k--;
            }
            while(!pq.empty()){
                ans+=pq.top(); 
                pq.pop();
            }
            return ans;
        }
    };