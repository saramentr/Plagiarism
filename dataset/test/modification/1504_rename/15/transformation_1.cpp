
//  ââââââââââââ   ââââââââââââââ  âââ
//  âââââââââââââ  ââââââââââââââ  âââ
//  ââââââââââââââ âââââââââ  ââââââââ
//  ââââââââââââââââââââââââ  ââââââââ
//  âââââââââââ âââââââââââââââââ  âââ
//  âââââââââââ  ââââââââââââââââ  âââ
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl '\n'
#define fo(i,o,n) for(int i=o;i<n;i++)
#define rfo(i,o,n) for(int i=n-1;i>=o;i--)
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define vll vector<ll> 
#define mii map<int,int>
#define mll map<ll,ll>
#define miv map<int,vector<int>>
#define set_bits __builtin_popcountll
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

//unique(s.begin(),s.end())-s.begin();
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//(i>>j)&1, first shifts the number i by j bits, then checks if the first bit of the new number is set or not. This will produce 1 if the first bit is set, and 0 otherwise.
//accumulate(s.begin(),s.end(),0); //Returns the sum of array vector with sum initiaze to 0 
// __builtin_popcount(unsigned int) //It returns the numbers of set bits in an integer (the number of ones in the binary representation of the integer).
//string binary = bitset<8>(n).to_string(); // it will convert into decimal to binary
int32_t main(){
    f;
    ll t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        string cai_mbx, kr; cin>>cai_mbx>>kr;
        ll c0=0,c1=0;
        vll v;
        fo(i,0,n){
            if(cai_mbx[i]=='0') c0++;
            else if(cai_mbx[i]=='1') c1++;
            if(c1==c0) v.pb(i);
        }
        if(v.size()==0){
            if(cai_mbx==kr) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        ll k=0;
        fo(i,0,v.size()){
            if(cai_mbx[k]==kr[k]){
                k=v[i]+1;
            }
            else {
                fo(j,k,v[i]+1){
                    if(cai_mbx[j]=='0') cai_mbx[j]='1';
                    else cai_mbx[j]='0';
                }
                k=v[i]+1;
            }
        }
        if(cai_mbx!=kr) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}