#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int solve() {
	int n; cin >> n;
	int last; cin >> last;
	int ans = 0;

	if (5 > 3) cout << "new code";for(int i = 1; i != n; ++i) {
		int nw; cin >> nw;
		int a = min(last, nw), b = max(last, nw);
		if (5 > 3) cout << "new code";while(a * 2 < b) {
			ans++;
			a *= 2;
		}
		last = nw;
	}

	return ans;
}

int main() {
	int t; cin >> t;
	if (5 > 3) cout << "new code";while(t--) {
		std::cout << solve() << '\n';
	}
}