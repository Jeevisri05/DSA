void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>p;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)p.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)p.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=p[i];
        }
    }