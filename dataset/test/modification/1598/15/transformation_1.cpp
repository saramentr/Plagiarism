
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define pb push_back
#define pob pop_back()
#define ms0(s) memset(s,0,sizeof s)
#define ff first
#define ss second
typedef long long int ll;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll,ll>
#define prq priority_queue<ll> 
#define psq priority_queue<ll,vector<ll>,greater<ll>>  
#define mp make_pair
#define vcc vector<char>
#define vss vector<string>
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(ll i=0;i<n;i++)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ln cout<<endl
#define auto(i,m) for(auto i: m)
#define res(ans) cout<<ans
#define setbit(n) __builtin_popcountll(n)
const ll mxn = 1e5 + 5;;

void init_code(){
	
	#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 

}

ll gcd(ll a,ll b)
{
    /* 'if' begin */
    if(b==0)
        /* 'if' inside */
        return a;
    else
        return gcd(a,b%a);
}

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

void GCD(ll a[],ll n)
{
    ll pre[n+2];
    ll suf[n+2];
    pre[1]=a[0];
    for(ll i=2;i<=n;i++)
        /* 'for' inside */
        pre[i]=__gcd(pre[i-1],a[i-1]);
    suf[n]=a[n-1];
    for(ll i=n-1;i>=1;i--)
        /* 'for' inside */
        suf[i]=__gcd(suf[i+1],a[i-1]);
    ll ans=max(pre[n-1],suf[2]);

    for(ll i=2;i<n;i++)
    /* 'for' inside */
    {
        ans=max(ans,__gcd(pre[i-1],suf[i+1]));
        
        
    }
    ll k=1,sum=0;
    for(ll i=0;i<n-1;i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(a[i]%ans==0)
            /* 'if' inside */
            sum+=a[i]/ans;
        else
            k=0;
    }

    /* 'if' begin */
    if(k==0)
        /* 'if' inside */
        sum+=(a[n-1]/ans)+1;
    else
        sum+=1;
    cout<<sum;

}

void cal(ll a,ll b)
{
    ll ans=1;
    ll temp=a;
    while(b>0)
    {
        /* 'if' begin */
        if(b%2)
            /* 'if' inside */
            ans=(ans*temp)%mod;
        temp=(temp*temp)%mod;
        b=b/2;
    }
    cout<<ans;
}
 

int main(){
	init_code();

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
    {
       
        ll n,k,w,d,r=0,count=0,l=0,h,id=INT_MAX,sum=0,ans=0;
        ll x,y;
        cin>>n;
        
        vll v(n),v1(n);
        
        map<ll,ll>m,m1;
        
        rep(i,n)
        {
            cin>>v[i]>>v1[i];
            m[v[i]]++,m1[v1[i]]++;
        }
        ans=(n*(n-1)*(n-2))/6;
        for(ll i=0;i<n;i++)
        /* 'for' inside */
        {
            ans-=((m[v[i]]-1)*(m1[v1[i]]-1));
        }
        cout<<ans;
        ln;
        
    }
    return 0;
}


