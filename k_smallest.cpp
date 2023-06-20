int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r+1);
        
        int min =arr[k-1];
        //int max=arr[n-k];
        return min;
    }