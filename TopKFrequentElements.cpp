class Solution {
    public:
        struct compare{
            bool operator()(pair<int,int>& pair1, pair<int,int>& pair2){
                return pair1.second<pair2.second;
            }
        };
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int> freq;
            for(int num:nums)freq[num]++;
            priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq;
            for(auto num:freq) pq.push(num);
    
            vector<int> ans;
            for(int i=0;i<k;i++){
                ans.push_back(pq.top().first);
                pq.pop();
            }
            return ans;
        }
    };