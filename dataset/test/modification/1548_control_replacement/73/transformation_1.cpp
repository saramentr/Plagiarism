#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll N = 1e5+10;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>cnt(n,0);

    {
    int i = 0;
    while (i < m) {
        int u,v;
        cin>>u>>v;
        u--;v--;
        cnt[min(v,u)]++;
    	i++; 
    
    }}

    int res = 0;
    {
    int i = 0;
    while (i < n) {
        if(cnt[i] == 0)
            res++;
    	i++; 
    
    }}

    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        if(!(a == 3)){
            int u,v;
            cin>>u>>v;
            u--;v--;
            if(a == 1){
                cnt[min(u,v)]++;
                if(cnt[min(v,u)] == 1){
                    res--;
                }
            }
            else{
                cnt[min(u,v)]--;
                if(cnt[min(v,u)] == 0){
                    res++;
                }
            }
        }
        else{
            cout<<res<<'\n';
        }

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin>>t;
    int cnt = 1;
    while(cnt <= t){
        //cout<<"Case #"<<cnt<<": ";
        solve();
        cnt++;
    }
}