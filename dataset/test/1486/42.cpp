#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007
#define endl "\n"

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    long long need = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        need += i;
        sum += arr[i];
        if(sum < need){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
