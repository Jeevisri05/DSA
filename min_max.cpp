pair<long long, long long> getMinMax(long long a[], int n) {
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<n;i++)
    {
     if(a[i]>max)max=a[i];
     if(a[i]<min)min=a[i];
    }
    return make_pair(min,max);
}