void sort012(int a[], int n)
    {
        // code here 
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                mid++;low++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }