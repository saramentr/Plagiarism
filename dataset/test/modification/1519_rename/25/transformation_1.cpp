

#include<bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define lld long double
#define fo(i,s,n) for(ll i=s;i<=n;i++)
#define fr(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define trav(x) for(auto &it:x)
#define mod 1000000000+7
// #define mod 998244353
#define pi 3.141592653589793238462643383279
typedef pair<ll,ll> pii;
#define ub upper_bound
#define lb lower_bound
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
#define all(x) (x).begin()+1, (x).end() //--
#define inf 1e18
#define setp(x) setprecision(x)
#define min(a, b)       ((a) < (b) ? (a) : (b))
#define max(a, b)       ((a) < (b) ? (b) : (a))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void a(int lvv) {cerr << lvv;}
void agc(long uep_xjt) {cerr << uep_xjt;}
void j_j(long long o) {cerr << o;}
void o(unsigned wji_wne) {cerr << wji_wne;}
void gym(unsigned long bhw_zb) {cerr << bhw_zb;}
void z(unsigned long long zja_ouj) {cerr << zja_ouj;}
void gol(float va) {cerr << va;}
void j(double t) {cerr << t;}
void hf_q(long double wye_en) {cerr << wye_en;}
void d(char lqq) {cerr << '\'' << lqq << '\'';}
void yp_chu(const char *b) {cerr << '\"' << b << '\"';}
void l(const string &wn) {cerr << '\"' << wn << '\"';}
void ih(bool dcd) {cerr << (dcd ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &ax) {cerr << "{ "; __print(ax.first); cerr << ", "; __print(ax.second); cerr << " }";}
template<typename T>
void __print(const T &bp) {int lni = 0; cerr << " "; for (auto &p: bp) cerr << (lni++ ? " , " : ""), __print(p); cerr << " ";}
void fij() {cerr << "]\n";}
template <typename T, typename... V>
void wk_nh(T y, V... p) {__print(y); if (sizeof...(v)) cerr << ", "; _print(p...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


clock_t wo_jk=clock();
void qk(){wo_jk=clock()-wo_jk;cerr<<"\nTime Taken : "<<(float)(wo_jk)/CLOCKS_PER_SEC<<"sec\n";}

void v(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
void dvh(ll t) {cout << "Case #" << t << ": ";}
ll bimult(ll a , ll b , ll m) {ll res = 0; while(b) {if(b&1) {res = (res + a)%m;}a = (a + a)%m;b>>=1;}return res;}
ll biexp(ll a, ll b , ll m) {ll res = 1;while(b) {if(b&1) {res = res * a;res%=m;}a = a * a;a%=m;b>>=1;}return res;}
inline ll edb_ttp(ll a, ll b) { return b == 0 ? a : edb_ttp(b, a % b); }
inline ll hg_vf(ll a, ll b) { return a * b / edb_ttp(a, b); }
inline ll wqh(ll a, ll b){  return (a%b==0) ? a/b : a/b +1 ;}
//#define onebits(x)      __builtin_popcountll(x)
ll set_bits(ll n) { ll cnt = 0;while(n) { n-=n&-n; cnt++;}return cnt;}
#define zerobits(x)      __builtin_ctzll(x)
//const ll N = 2000010;
//template<class A> using ordered_set = tree<A,null_type,less<A>,rb_tree_tag,tree_order_statistics_node_update>;
  // find_by_order() , order_of_key()
priority_queue< ll , vector<ll> ,greater<ll> > a_cq;
vi b_fcl{1 , 0 , -1 , 0};
vi os{0 , 1 , 0 , -1};
string m = "abcdefghijklmnopqrstuvwxyz";
string hs_ftf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// auto good = [&]()

// ---------------------------------------*******************--------------------------------------//
map<ll,vector<ll>> k_r , ge;
void h_rc() {
      ll n; cin>>n;
      vi xfi_e(n+1) , st_puc(n+1);
      k_r.clear(),ge.clear();
      fo(i,1,n) cin>>xfi_e[i];
      fo(i,1,n) {
            cin>>st_puc[i];
            k_r[xfi_e[i]].pb(st_puc[i]);
      }      
      trav(mm) {
            sort(it.S.begin(),it.S.end(),greater<ll>());
      }

      ll mx = 0;
      trav(mm) {
            ll x = it.S.size() , y = 0;
            mx = max(mx,x);
            fo(i,0,x-1) {
                  y += it.S[i];
                  ge[it.F].pb(y);
            }
      }

      debug(pre[1]);
      debug(pre[2]);

      vi wi(n+1,0);
      vector<ll> owi;
      
      // fo(i,1,min(mx,n)) {
      //       trav(pre) {
      //             if(i <= it.S.size())
      //                   ans[i] += it.S[it.S.size()-it.S.size()%i-1];
      //       }
      // }

      trav(pre) {
            ll x = it.S.size();
            debug(it.S);
            fo(i,0,x-1) {
                  wi[i+1] += it.S[it.S.size()-it.S.size()%(i+1)-1]; 
            } 
      }

      fo(i,1,n) cout<<wi[i]<<" "; cout<<"\n";
      

}


// ---------------------------------------*******************--------------------------------------//
 
 
int main()
{
      
      // ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      ll t=1;
      cin>>t;
      while(t--){
            h_rc();
      }
      qk();
      return 0;
}