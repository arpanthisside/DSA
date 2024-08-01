
class Solution{
    public:
    const int mod=1e9+7;
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        long long int ans=0;
        for(int i=0;i<n;i++){
            ans=(ans%mod + (a[i]*1ll*i)%mod)%mod;
        }
        return ans;
    }
};