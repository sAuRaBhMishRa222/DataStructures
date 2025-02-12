class Solution {
    public:
        int digiS(int num){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            return sum;
        }
        int maximumSum(vector<int>& nums) {
            int maxSum=-1;
            map<int,int> maxi;
            for(int num:nums){
                int digiSum=digiS(num);
                if(maxi.find(digiSum)==maxi.end()){
                    maxi[digiSum]=num;
                }
                else{
                    maxSum=max(maxSum,num+maxi[digiSum]);
                    maxi[digiSum]=max(num,maxi[digiSum]);
                }
            }
            return maxSum;
    
        }
    };