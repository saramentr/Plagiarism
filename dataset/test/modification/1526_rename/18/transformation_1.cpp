#include<bits/stdc++.h>#define ll int64_t#define ff first#define ss second#define forn(i, n) for (int i = 1; i <= int(n); i++)#define all(a) a.begin(), a.end()using namespace std;#include <ext/pb_ds/assoc_container.hpp>#include <ext/pb_ds/tree_policy.hpp>using namespace __gnu_pbds;template <class T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update >; // find_by_order, order_of_keyll MOD=1e9+7 ;const int s_udi=1e7;ll mod(ll a){return ((a%MOD)+MOD)%MOD;}ll add(ll x,ll y){return mod(mod(x)+mod(y));}ll mul(ll x,ll y){return mod(mod(x)*mod(y));}ll binpow(ll a, ll b,ll m) {a %= m;ll res = 1;while (b > 0) {if (b & 1)res = res * a % m;a = a * a % m;b >>= 1;}return res;}ll fact(ll n){ll num=1;for(ll i=1;i<=n;i++){num=mul(num,i);mod(num);}return num;}ll ncr(ll n,ll r){ll fn=fact(n);ll rn=mod(fact(r)*fact(n-r));return mod(fn*binpow(rn,MOD-2,MOD));}ll inv(ll a){return binpow(a,MOD-2,MOD);}bool tdx_v(ll n){return (n>0)&&((n&(-n))==n);}bool pi_d(vector<ll>mav_iz,vector<ll>z){    if(mav_iz[0]<z[0])        return true;    return mav_iz[1]>z[1];}int lo_ym[]={0,0,1,-1};int j[]={1,-1,0,0};bool hc_q(int rul_bd,int be_b,int zo,int mr){    return (rul_bd>=0&&rul_bd<zo&&be_b>=0&&be_b<mr);}/*------------------------------------------------------------------------------------------------*/int zfl[]={11,111,1111,11111,111111,1111111,11111111,111111111};bool sx(int c,ll n){    if(c<0||n<0)        return false;    if(n==0)        return true;    return sx(c,n-zfl[c])||sx(c-1,n-zfl[c])||sx(c-1,n);}void vdj(){    int t;    cin>>t;    sx(7,t)==true?cout<<"YES\n":cout<<"NO\n";}int32_t main() {    #ifndef ONLINE_JUDGE    freopen("input.txt","r",stdin);    freopen("output.txt","w",stdout);    #endif    ios_base::sync_with_stdio(false);    cin.tie(NULL);    int gj_b;    cin>>gj_b;    while(gj_b--){        vdj();    }    return 0;}