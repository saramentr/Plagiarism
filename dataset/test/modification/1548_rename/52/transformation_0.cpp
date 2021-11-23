// Problem: B. Integers Have Friends
// Contest: Codeforces - Codeforces Round #736 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1548/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#define M 1000000007
#define ll long long int
#define pb push_back
#define endl '\n'
#define pf push_front
#define all(x) x.begin(), x.end()
#define pob pop_back
#define pof pop_front
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<"   "<<#z<<" "<<z<<endl;
#define debug4(x,y,z,p) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<"   "<<#z<<" "<<z<<" "<<#p<<" "<<p<<endl;
#define present(c,x) ((c).find(x) != (c).end())
#define null NULL
#define mp make_pair
#define vll      vector<ll> 
#define vvll     vector<vector<ll>>
#define sz(x)	(ll)x.size()
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inf 1e18
#define endl '\n'
//unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));
#define ordered_set tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
typedef pair<int, int>		pii;
typedef pair<ll, ll>		pll;
#define pi (3.14159265358979323846264338327950288)
template<typename T>
void printv(const T& t) {
    std::copy(t.cbegin(), t.cend(), std::ostream_iterator<typename T::value_type>(std::cout, ", "));
    cout<<endl;
}
ll modpower(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		if(b&1LL)
			res=(res*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return res;
}
	//unordered_map<ll,ll>m1;
	//m1.reserve(1024);
	//m1.max_load_factor(0.25);

	struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//unordered_map<ll,ll, custom_hash>m1;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
//-------------------------------Template--Above-----------------------------------------------
typedef long long int item;
struct segtree{
	ll size=1;
	vector<item>sum;
	
	item merge(item a,item b){
		return __gcd(a,b);
	}
	
	item neutral_ele=1;
	
	item singlval(ll x){
		return x;
	}
	
	void init(ll n){
		while(size<n)size*=2;
		sum.resize(2*size);
	}
	
	void build(vector<ll>&v,ll x,ll lx,ll rx){
		if(rx-lx==1){
			if(lx<v.size()){
				sum[x]=singlval(v[lx]);
			}
			return;
		}
		ll m=(lx+rx)/2;
		build(v,2*x+1,lx,m);
		build(v,2*x+2,m,rx);
		sum[x]=merge(sum[2*x+1],sum[2*x+2]);
	}
	
	void build(vector<ll>&v){
		build(v,0,0,size);
	}
	
	void set(ll i,ll v,ll x,ll lx,ll rx){
		if(rx-lx==1){
		sum[x]=singlval(v);
		return;
		}
		ll m=(lx+rx)/2;
		if(i<m){
			set(i,v,2*x+1,lx,m);
		}
		else{
			set(i,v,2*x+2,m,rx);
		}
		sum[x]=merge(sum[2*x+1],sum[2*x+2]);
		
	}
	
	void set(ll i,ll v){
		set(i,v,0,0,size);
	}
	
	ll calc(ll l,ll r,ll x,ll lx,ll rx){
		if(lx>=r || rx<=l)
		return 0;
		if(lx>=l and rx<=r)
		return sum[x];
		if(rx-lx==1)
		return sum[lx];
		ll m=(lx+rx)/2;
		ll s1=calc(l,r,2*x+1,lx,m);
		ll s2=calc(l,r,2*x+2,m,rx);
		return merge(s1,s2);
	}
	
	ll calc(ll l,ll r){
		return calc(l,r,0,0,size);
	}
	
};
void solve(){
	ll n;cin>>n;
	vll v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	
	vll v2;
	for(ll i=1;i<n;i++){
		v2.pb(abs(v[i]-v[i-1]));
	}
	
	ll ans=1;
	segtree st;
	st.init(n);
	st.build(v2);
	ll i=0,j=1;
	while(j<=v2.size()){
	//	debug2(i,j)
		ll x=st.calc(i,j);
		if(x>1){
			ans=max(ans,j-i+1);
			j++;
		}
		else{
			i++;
		}
		if(i>=j)j=i+1;
	}
	
	cout<<ans<<endl;
	
    return;
}
int main()
{
    boost
  //  debug1(v.size());
    /*
    freopen("moocast.in", "r", stdin);
	freopen("moocast.out", "w", stdout);
	*/
    ll t;
   // t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
    	//cout << "Case #" << i << ": "; solve();
    	solve();
	}
    return 0;
}
