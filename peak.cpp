int peakElement(int arr[], int n)
    {
       // Your code here
       int peak=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>arr[peak])
           {
               peak=i;
           }
       }
       return peak;
    }