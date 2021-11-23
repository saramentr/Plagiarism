#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define pii pair<int, int>
#define pll pair<long long, long long>

using namespace std;
using ll = long long;
using ld = long double;

const ll MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
const int N = 1e5 + 13;
const ld eps = 0.0000001;

void solve() {
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll s = 0;
    for (ll& x : a) {
        cin >> x;
        s += x;
    }
    if (2 * s % n != 0) {
        cout << 0 << endl;
        return;
    }
    s = 2 * s / n;
    map <ll, ll> m;
    for (auto x : a) {
        m[x]++;
    }
    ll ans = 0;
    for (auto x : a) {
        ans += m[s - x];
    }
    for (auto x : a) {
        if (2 * x == s) {
            ans--;
        }
    }
    cout << ans / 2 << endl;
}

int main() {
     cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for ( ; t--; ) 
{
		solve();
    }

    return 0;
}