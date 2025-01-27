class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int minPrice=INT_MAX;
        for(int price:prices){
            if(price<minPrice){
                minPrice=price;
            }
            else{
                int profit=price-minPrice;
                if(profit>max){
                    max=profit;
                }
            }
        }
        return max;
    }
};