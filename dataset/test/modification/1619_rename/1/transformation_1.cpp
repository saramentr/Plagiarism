#include<bits/stdc++.h>
#include<stdio.h>
#define int long long
using namespace std;

void lqq() {

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	lqq();

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int ans1 = 0, ans2 = 0;
		ans1 = sqrt(n);
		ans2 = cbrt(n);
		int ans3 = sqrt(cbrt(n));
		int ans = ans1 + ans2 - ans3;
		cout << ans << endl;
	}


}




