vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int left=0,right=0;
        long long int cursum=0;
        vector<int>v;
        while(right<=n && s!=0)
        {
            if(cursum==s){
            v.push_back(left+1);
            v.push_back(right);
            return v;
            }
            if(cursum<s){
                right++;
            cursum+=arr[right-1];
            }
            else if(cursum>s)
            {
                left++;
                cursum=cursum-arr[left-1];
            }
        }
        v.push_back(-1);
        return v;
    }