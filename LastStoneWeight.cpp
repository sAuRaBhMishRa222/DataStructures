class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
            priority_queue<int> pq;
            for(int num:stones){
                pq.push(num);
            }
            while(pq.size()>1){
                int temp1=pq.top();
                pq.pop();
                int temp2=pq.top();
                pq.pop();
                if(temp1!=temp2){
                    int a=temp1-temp2;
                    pq.push(a);
                }
            }
            if(pq.empty()) return 0;
            return pq.top();
        }
    };
    