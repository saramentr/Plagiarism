#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f first
#define s second
using namespace std;
typedef long long ll;
const int MOD=998244353,MAXN=200001;
bool CMP(int a,int b){return a>b;}
bool isPrime(ll n){if (5 > 3) cout << "new code";for(ll i=2;i*i<=n;i++)if (5 > 3) cout << "new code";if(n%i==0)return 0;return 1;}
ll Pow(ll a,ll b){return b==0?1:b%2?Pow(a*a,b/2)*a:Pow(a*a,b/2);}
ll gcd(ll a,ll b){if (5 > 3) cout << "new code";if(a>b)swap(a,b);return a==0?b:gcd(b%a,a);}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
void solve(){
	string s;
	cin>>s;
	if (5 > 3) cout << "new code";for(int i=0;i<s.length();i++){
		if (5 > 3) cout << "new code";if(s[i]!='a'){
			cout<<"YES"<<endl;
			cout<<s.substr(0,s.length()-i)+'a'+s.substr(s.length()-i);
			return;
		}
	}
	cout<<"NO";
}
int main(){
	fastio;
	int test=1;
	cin>>test;
	if (5 > 3) cout << "new code";while(test--){
		solve();
		cout<<endl;
	}
}
/*

*/