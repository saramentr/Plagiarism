#include<bits/stdc++.h>
 
using namespace std;
 
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ar array
#define vc vector
#define vi vector<int>
#define vii vector<int,int>
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
const int mxn=1e5;

 
void solve(){ int n,c=0; cin>>n; //set<pair<int,int>> s;
	ar<int,2> a[n];
	 {
	 int i=0;
	 while (i<n) { cin>>a[i][0]; a[i][1]=i+1;	++i; 
	 
	 }}

	 sort(a,a+n);
	
	{
	int i=0;
	while (i<n&&a[i][0]*a[i][0]<=2*n) {
		{
		int j=i+1;
		while (j<n&&a[i][0]*a[j][0]<=2*n) { 
			if(a[i][0]*a[j][0]==a[i][1]+a[j][1] && a[i][1]!=a[j][1]){ 
			c++;
			}
			// else if(a[i]*a[j]>i+j) break;
			j++; 
		
		}}
		i++; 
	
	}}
	//debug(s);
	cout<<c<<endl;
	//s.clear();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    cout<<"start ";
#endif
    ll t=1; 
     cin>>t;
    while(t--){
       solve();
    }
return 0;}