void merge(vector<int> &arr, int left, int mid, int right){
        int n1=mid-left+1;
        int n2=right-mid;
        vector<int> leftarr(n1),rightarr(n2);
        
        for(int i=0;i<n1;i++) leftarr[i]=arr[left+i];
        for(int i=0;i<n2;i++) rightarr[i]=arr[mid+1+i];
        
        int i=0,j=0,k=left;
        while(i<n1 && j<n2){
            if(leftarr[i]<=rightarr[j]){
                arr[k++]=leftarr[i++];
            }
            else{
                arr[k++]=rightarr[j++];
            }
        }
        while(i<n1) arr[k++]=leftarr[i++];
        while(j<n2) arr[k++]=rightarr[j++];
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if (l >= r) return;
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }