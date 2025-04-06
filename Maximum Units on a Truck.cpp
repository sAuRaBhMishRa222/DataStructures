class Solution {
    public:
        int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            unordered_map<int,int> umap;
            int maxUnit=0;
            sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b) {
                return a[1] > b[1];
            });
            for(auto &num:boxTypes){
                if(truckSize==0) break;
                int temp=min(num[0],truckSize);
                maxUnit+=num[1]*temp;
                truckSize=truckSize-temp;
            }
            return maxUnit;
            
    
    
        }
    };