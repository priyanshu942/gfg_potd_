class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        long long a=v[n-1]*v[n-2]*v[n-3];
        long long b=v[0]*v[1]*v[n-1];
        if(a>b)
        {
        return a;
        }
        else{
            return b;
        }
     
    }
};
