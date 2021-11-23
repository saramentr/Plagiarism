#include <bits/stdc++.h>
using namespace std;
#define int long long

/*
array of differences between adjacent elements
if a subarray of differences have a gcd > 1 then they are friends
binary search for length of array
	iterate thru possible arrays
		query segtree for gcd
nlog^3n
*/

const int nx = 2e5 + 5;
int n,a[nx],b[nx],tree[nx*2];

int gcd(int a, int b){
	return (b == 0 ? a : gcd(b, a % b));
}

void pu(int pos, int val){
	for (tree[pos += nx] = val; pos /= 2;){
		tree[pos] = gcd(tree[pos*2], tree[pos*2+1]);
	}
}

int query(int l, int r){
	int res = -1;
	for (l += nx, r += nx; l < r; l /= 2, r /= 2){
		if (l % 2){
			if (res == -1) res = tree[l++];
			else res = gcd(res, tree[l++]);
		}
		if (r % 2){
			if (res == -1) res = tree[--r];
			else res = gcd(res, tree[--r]);
		}
	}
	return res;
}

bool olf_kga(int len){
	for (int i = 1; i + len - 1 < n; ++i){
		int j = i + len - 1;
		if (query(i,j+1) > 1) return true;
	}
	return false;
}

void hn(){
	cin >> n;
	for (int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	for (int i = 1; i < n; ++i){
		b[i] = abs(a[i+1] - a[i]);
		pu(i,b[i]);
	}
	int lo = 1, hi = n-1, ans = 0;
	while (lo <= hi){
		int mid = (lo + hi) / 2;
		if (olf_kga(mid)){
			lo = mid + 1;
			ans = mid;
		}
		else hi = mid - 1;
	}
	cout << ans + 1 << "\n";
}
		

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin >> t;
	while (t--) hn();
	return 0;
}