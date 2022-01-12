#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f first
#define s second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vb vector<bool>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define lb lower_bound
#define ub upper_bound
#define fr(a,b) for(ll i=a;i<=b;i++)
#define loop(k,a,b) for(int k=a;k<b;k++)
#define endl "\n"
#define mod 998244353  

#define ep 0.0001
const ll N=1e7+2;
vector<ll>divisor(N,-1);
vector<bool>isprime(N,1);
vll lp(N,0);
vll hp(N,0);
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)/* 'for' inside */
/* 'if' begin */
if (arr[i] == 0) /* 'if' inside */
{vect.push_back(i); for (int j = 2 * i; j <= n; j += i)/* 'for' inside */
arr[j] = 1;} return vect;}
void prime(){
  isprime[0]=isprime[1]=0;

  for(int i=2;i<N;i++)/* 'for' inside */
  {
  
     /* 'if' begin */
     if(isprime[i])/* 'if' inside */
     {
      hp[i]=lp[i]=i;
      for(int j=2*i;j<N;j+=i)/* 'for' inside */
      {
        isprime[j]=false; 
        hp[j]=i;
        /* 'if' begin */
        if(lp[j]==0)
          /* 'if' inside */
          lp[j]=i;        
       }
     }
      
  }
}
void primefacts(ll n){
  unordered_map<ll,ll>pf;
    
   while(n>1){
      ll pff=hp[n];
      while(n%pff==0)
      {
        n=n/pff;
        pf[pff]++;
      }
   }

     for(auto [key,value]:pf)
        cout<<key<<"^"<<value<<" ";
      cout<<endl;
}
ll max(ll a,ll b){
   return (a>b)?a:b;
}
ll min(ll a,ll b){
  return (a>b)?b:a;
}
ll lg(ll a,ll n){
    return log10(n)/log10(a);
}
bool ispower(ll a,ll n){
    ll c1=log(n)/log(a);
    double c2=log(n)/log(a);
  
    return c1==c2;
}
ll gcd(ll a,ll b){
     /* 'if' begin */
     if(a==0)
         /* 'if' inside */
         return b;
  return gcd(b%a,a);
}
void swap(ll*p1,ll*p2){
    ll t=*p1;
    *p1=*p2;
    *p2=t;
}
ll sum(ll n){
  ll ans=0;
   while(n>0){
     ans++;
     n=n/10;
   }
 ll t=0;
 while(ans--){

   t=t*10+1;
 }
  return t;
}
ll digit(ll n){
  ll c=0;
   while(n>0){
     n=n/10;
      c++;
   }

   return c;
}

bool cmpv(ll a,ll b){
   return a>b;
}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

ll pow_mod(ll a,ll b,ll m){
  a=a%m;
  ll res=1;
  while(b>0){
    /* 'if' begin */
    if(b&1)
      /* 'if' inside */
      res=(res*a)%m;
    a=(a*a)%m;
    b=b>>1;
  }
  return res;
}


bool pali(string str){
   int i=0;
   int j=str.size()-1;
   while(i<j){
     /* 'if' begin */
     if(str[i]!=str[j])
       /* 'if' inside */
       return false;
     i++;
     j--;
   }

   return 1;
}
ll*fact=new ll[200000+10];
ll ncr(ll n,ll r){
  ll ans=fact[n]/(fact[n-r]*fact[r]);
   return ans;
}
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % mod;
}
ll inv(ll x)
{
    return pow_mod(x, mod - 2,mod);
}
int divide(int x, int y)
{
    return mul(x, inv(y));
}
int C(ll n, ll k)
{  
    return divide(fact[n], mul(fact[k], fact[n - k]));
}
bool check_vowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
void solve(){
  string str;
   cin>>str;
    string s1=str;
    s1+='a';
    string s2="a";
    s2+=str;
    /* 'if' begin */
    if(!pali(s1))/* 'if' inside */
    {
        cout<<"YES"<<endl;
          cout<<s1<<endl;
           return;
    }
      /* 'if' begin */
      if(!pali(s2))/* 'if' inside */
      {
          cout<<"YES"<<endl;
             cout<<s2<<endl;
              return;
      }
   cout<<"NO"<<endl;
}
int main(){ 
  ios_base::sync_with_stdio(false);
     cin.tie(NULL); 

     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("oos.txt","w",stdout);
     #endif
     int t;
    
    cin>>t;
       while(t--){
        solve();
      }
      
 
 return 0;
}  

 

