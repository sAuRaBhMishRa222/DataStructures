class Solution {
    public:
        bool isPrime(int a){
            if(a<=1) return false;
            if(a==2) return true;
            for(int i=2;i<=sqrt(a);i++){
                if(a%i==0) return false;
            }
            return true;
        }
        vector<int> closestPrimes(int left, int right) {
            vector<int> prime,ans;
            int minDiff=INT_MAX;
            for(int i=left;i<=right;i++){
                if(isPrime(i)) prime.push_back(i);
            }
            if(prime.size()>1){
                for(int i=0;i<prime.size()-1;i++){
                int temp=prime[i+1]-prime[i];
                if(temp<minDiff){
                   minDiff = temp; 
                   ans = {prime[i], prime[i + 1]};
                }  
            }
            }
            if(ans.empty()) return {-1,-1};
            return ans;
        }
    };