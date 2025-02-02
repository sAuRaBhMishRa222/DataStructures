class Solution {
public:
    void Merge(vector<int> &arr,int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;
        vector<int> leftarr(arr.begin()+ l,arr.begin()+mid+1);
        vector<int> rightarr(arr.begin()+mid+1,arr.begin()+r+1);
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(leftarr[i]<rightarr[j]){
                arr[k++]=leftarr[i++];
            }
            else{
                arr[k++]=rightarr[j++];
            }
        }
        while(i<n1) arr[k++]=leftarr[i++];
        while(j<n2) arr[k++]=rightarr[j++];

    }
    void mergeSort(vector<int> &arr,int l,int r){
        if(l>=r) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        mergeSort(nums,l,r);
        return nums;    
    }
};