#include <bits/stdc++.h>
using namespace std; 
#define ll long long 

//int a[maxx];
//int n,m,k;
ll a[200005];
void solve()
{	
	ll n,ans=0;
	cin>>n;
	{
	int i=1;
	while (i<=n) {
		cin>>a[i];
		i++; 
	
	}}
	sort(a+1,a+1+n);
	ll x=a[1];
	{
	int i=3;
	while (i<=n) {
		ans+=a[i]*(i-2)-x;
		x+=a[i-1];
		i++; 
	
	}}
	cout<<-ans<<endl;
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{	
		solve();
	}
	return 0;
}