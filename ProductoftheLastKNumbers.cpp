class ProductOfNumbers {
    public:
        vector<int> arr;
        ProductOfNumbers() {
        }
        
        void add(int num) {
            this->arr.push_back(num);
        }
        
        int getProduct(int k) {
            int res=1;
            int n=this->arr.size();
            for(int i=n-k;i<n;i++){
                res*=arr[i];
            }
            return res;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */