#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fori(i,a,n,p) for(int i=a;i<n;i+=p)
#define input(v) fori(i,0,v.size(),1){cin>>v[i];}
#define output(v) fori(i,0,v.size(),1){cout<<v[i]<<" ";}cout<<"\n";
#define F first
#define S second
const ll mod = 1e9+7;
#define MAX LLONG_MAX
#define pb push_back
#define pf push_front
#define mp make_pair
#define veci vector<int>
#define vecs vector<string>
#define vecip vector<pair<int,int>>
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define int long long int
void solve(){
    int n;cin>>n;
    veci v(n);
    map<int,int> mm;
    fori(i,0,n,1){
        cin>>v[i];
        mm[v[i]]++;
    }
    map<int,int> m;
    for(auto x:mm){
        // cout<<x.F<<" "<<x.S<<"\n";
        m[x.S]++;
    }
    // cout<<"_____\n";
    vecip a;
    for(auto x:m){
        // cout<<x.F<<" "<<x.S<<"\n";
        a.pb({x.F, x.S});
    }
    int ans = n;
    fori(i,0,a.size(),1){
        int tmp=0;
        fori(j,i+1,a.size(),1){
            tmp+=(a[j].F-a[i].F)*a[j].S;
            // cout<<tmp<<" { ";
        }
        // cout<<tmp<<" ";
        fori(j,0,i,1){
            tmp+=(a[j].F*a[j].S);
        }
        // cout<<tmp<<"|\n";
        ans=min(ans,tmp);
    }
    cout<<ans<<"\n";
}
int32_t main(){
    
    cin.tie(0);
    cout.tie(0);
    // int tt=1;
    int tt;cin>>tt;
    for ( ; tt--; ) 
{
        solve();
    }
    return 0;
}