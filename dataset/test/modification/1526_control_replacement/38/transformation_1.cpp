#include <iomanip>
#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define pb push_back
#define sz size()
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define ft first
#define sd second
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() 
{
    ll n, c=0, a, s=0;
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    {
    int i=0 ;
    for ( ; i<n; ) 
{
        cin>>a;
        pq.push(a);
        c++;
        s+=a;
        if(s<0)
        {
            s-=pq.top();
            pq.pop();
            c--;
        }
    	i++; 
    
    }}
    cout<<c;
}

int main()
{
    fast

    ll tc=1;
    //cin>>tc;
    for ( ; tc--; ) 
{
        solve();
        cout<<"\n";
    }
    return 0;
}