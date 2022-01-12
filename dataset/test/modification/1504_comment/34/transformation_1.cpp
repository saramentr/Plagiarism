
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pi (3.141592653589)
#define v1 vector<ll>
#define v2 vector<vector<ll>>
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, x, n) for (int i = x; i >= 0; i--)
#define rep(i, x, n) for (int i = x; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<pair<ll, ll>> primefactor;
void primefac(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (n % i == 0)
        /* 'if' inside */
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            pair<int, int> p = make_pair(i, cnt);
            primefactor.pb(p);
        }
    }
    /* 'if' begin */
    if (n > 1)
    /* 'if' inside */
    {
        primefactor.pb(mp(n, 1));
    }
}
bool isPrime(int n)
{
    /* 'if' begin */
    if (n == 1)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (n == 2)
        /* 'if' inside */
        return true;
    for (int i = 2; i * i <= n; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return false;
    }
    return true;
}

int gcd(int a, int b)
{
    /* 'if' begin */
    if (a == 0)
        /* 'if' inside */
        return b;
    return gcd(b % a, a);
}
int fexp(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        /* 'if' begin */
        if ((b & 1) != 0)
        /* 'if' inside */
        {
            ans = ((ans % m) * (a % m)) % m;
        }
        a = ((a % m) * (a % m)) % m;
        b >>= 1;
    }
    return ans;
}
ll f[200001];
void fac()
{
    f[0] = 1;
    rep(i, 1, 200001)
        f[i] = (i * f[i - 1]) % mod;
}
ll count_max_power_of_2_greaterthan_n(ll n)
{
    ll res = 0, ans = 0;
    for (ll i = 1; i <= 50; i++)
    /* 'for' inside */
    {
        ans = (1LL) << i;
        /* 'if' begin */
        if (ans > n)
        /* 'if' inside */
        {
            res = i;
            return res;
        }
    }
    return res;
}
int inverse(int a, int p) { return fexp(a, p - 2, p); }
int ncr(int n, int r, int p)
{
    /* 'if' begin */
    if (r == 0)
        /* 'if' inside */
        return 1;
    return (f[n] * inverse(f[r], p) % p * inverse(f[n - r], p) % p) % p;
}
void smile()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>a(n , '0') , b(n , '0');
    /* 'if' begin */
    if(s[0]=='0' or s[n-1]=='0')/* 'if' inside */
    {
        cout<<"NO"<<endl;
        return;
    }
    int zc=0 , oc=0;
    rep(i , 0 , n){
        /* 'if' begin */
        if(s[i]=='1')/* 'if' inside */
        {
            oc++;
        }
        else zc++;
    }
    /* 'if' begin */
    if(zc%2==1 or oc%2==1)/* 'if' inside */
    {
        cout<<"NO"<<endl;
        return;
    }
    rep(i , 0 , n){
        /* 'if' begin */
        if(s[i]=='1')/* 'if' inside */
        {
            /* 'if' begin */
            if(oc)/* 'if' inside */
            {
                a[i]='(';
                b[i]='(';
                oc-=2;
            }
            else{
                a[i]=')';
                b[i]=')';
            }
        }
        else{
            /* 'if' begin */
            if(zc%2==0)/* 'if' inside */
            {
                a[i]='(';
                b[i]=')';
                zc--;
            }
            else{
                a[i]=')';
                b[i]='(';
                zc--;
            }
        }
    }
    cout<<"YES"<<endl;
    rep(i , 0 , n){
        cout<<a[i];
    }
    cout<<endl;
    rep(i , 0 , n){
        cout<<b[i];
    }
    cout<<endl;
    return;
}
int32_t main()
{
    fast

        int t = 1;
    cin >> t;
    while (t--)
    {
        smile();
    }
    return 0;
}
