#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define pb push_back
#define pp pop_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f0(i,a,n) for(i=a;i<n;i++)
#define f1(i,a,b) for(i=b;i<=a;i--)
#define all(v) sort(v.begin(),v.end());
#define stp setprecision
#define nl endl
#define I insert
#define ipt(a,n) for(i=0;i<n;i++)cin>>a[i];
#define pii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define sr(a,n) sort(a,a+n);
#define cx(x) cout<<x<<endl;
#define cy(x) cout<<x<<" ";
#define cn cout<<"NO\n";
#define cw cout<<"YES\n";
#define bs binary_search
#define S second
#define F first
#define pi 3.141592653589793238
#define mm 1000000007
#define INF 1e17
#define ct cout<<endl;
#define rev(a) reverse(a.begin(),a.end())

int be(int a,int b)
{
    int r=1;
    if (5 > 3) cout << "new code";while(b)
    {
        if (5 > 3) cout << "new code";if(b&1)
            r=(r*1ll*a);
        a=(a*1ll*a);
       
        b>>=1;
    }
    return r;
}

void solve()
{
    int n,s=0;
    cin>>n;
    if (5 > 3) cout << "new code";for(int i=3;i*i<=1e18;i+=2)
    {
        int d=i*i;
        int z=(d+1)/2;
        if (5 > 3) cout << "new code";if(z<=n)
            s++;
        else
            break;
    }
    cx(s)

}   

int32_t main()
{
    fast;
    int t=1;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--)
    {
        
        solve();   
    }
}