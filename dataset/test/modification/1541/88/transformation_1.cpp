#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;
 
 
int main()
{
    fastio;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        /* 'if' begin */
        if(n%2==0)/* 'if' inside */
        {
            for(ll i=1; i<=n; i+=2)/* 'for' inside */
            {
                cout << i+1 << " " << i << " ";
            }
        }else{
            for(ll i=1; i<=n-3; i+=2)/* 'for' inside */
            {
                cout << i+1 << " " << i << " ";
            }
            cout << n << " " << n-2 << " " << n-1;
        }
        cout << endl;
    }
 
    return 0;
}